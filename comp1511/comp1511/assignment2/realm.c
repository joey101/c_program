// Assignment 2 20T2 COMP1511: Castle Defense
//
// This program was written by Jawad Tanana (z5320158)
// on 25-07-2020
//
// Version 1.0.0 (2020-07-20): Assignment released.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "realm.h"
////////////////////////////////////////////////////////////////////////////////

// `struct realm` represents a realm, which represents the state of the
// entire program. It is mainly used to point to a linked list of 
// locations, though you may want to add other fields to it.
//
// You may need to add fields to struct realm.
struct realm {
    struct location *castle;
    struct location *lair;
};

// `struct location` represents a location, which could be a land,
// a tower, or a castle. Each of those places has a different type
// of information that this struct will need to store.
////////////////////////////////////////////////////////////////////////////////
// You will need to add fields to struct location.
struct location {
    char name[MAX_NAME_LENGTH];
    int type;
    int pow;
    int use;
    int effect;
    struct enemy *enemies;
    struct location *next;

};
////////////////////////////////////////////////////////////////////////////////
// `struct enemy` represents an enemy, which will move through the
// realm (to each location). Towers can deal damage to it, and
// it can deal damage to the Castle.
//
// You will need to add fields to struct enemy.
struct enemy {
    char name[MAX_NAME_LENGTH];
    int health;
    int max_health;
    struct enemy *next;
};

// Add any other structs you define here.


////////////////////////////////////////////////////////////////////////////////

// Function prototypes for helper functions
static Location new_location(char *name);
static void print_tower(char *name, int power, int uses, Effect effect);
static void print_land(char *name);
static void print_castle(char *name, int defense);
static void print_enemy(char *name, int cur_hp, int max_hp);

static struct location *find_location(Realm realm, char *name);
// Add prototypes for any extra functions you create here.

////////////////////////////////////////////////////////////////////////////////

// You need to implement the following 9 functions.
// In other words, write code to make the function work as described 
// in realm.h.

// Create a new realm, and return a pointer to it.
// You may need to change this function in later stages.
Realm new_realm(void) {
    struct realm *realm = malloc(sizeof(struct realm));
    realm->castle = new_location("Castle");
    realm->lair = new_location("Lair");

    if (realm->castle != NULL && realm->lair != NULL) {
        realm->castle->next = realm->lair;
    }

    return realm;
}
//------------------------------------------------------------------------------
// Return a new location created with malloc.
static Location new_location(char *name) {

    // TODO: Make this create a location and return a pointer to it.
    
    struct location *new_place = malloc(sizeof(struct location));
    new_place->enemies = NULL;
    new_place->next = NULL;
    if (strcmp(name, "Castle") == 0) {
        new_place->type = TYPE_CASTLE;
    }
    else {
        new_place->type = TYPE_LAND;
    }
    strcpy(new_place->name, name); 
    return new_place;
}
////////////////////////////////////////////////////////////////////////////////
//                           Stage 1 Functions                                //
////////////////////////////////////////////////////////////////////////////////
// Add a new location to the realm, and return the total number of
// locations in the realm.
int add_location(Realm realm, char *name) {

    // Note: you should use the new_location function here.
    struct location *curr = realm->castle;
    struct location *new_loc = new_location(name);
    int counter = 2;
    while (curr->next != realm->lair) {
       
        counter++;
        curr = curr->next;
    }
    curr->next = new_loc;
    new_loc->next = realm->lair;
    counter++;
    
    
    return counter; // TODO: Change this.
}

// Print out the realm.
void print_realm(Realm realm) {
    struct location *curr = realm->castle;
    // Note: you should use the provided print functions here.
     struct enemy *curr1 = curr->enemies;
    while (curr != NULL) {
        if (curr->type == TYPE_CASTLE) {
            
            print_castle(curr->name, STARTING_CASTLE_HP);
            
        } else if (curr->type == TYPE_LAND) {
            print_land(curr->name);
            
        } else if (curr->type == TYPE_TOWER) {
            print_tower(curr->name, curr->pow, curr->use, curr->effect);
        
        }
        
       
                 
        while (curr1 != NULL) {
            print_enemy(curr1->name, curr1->health, curr1->max_health);
            curr1 = curr1->next;
        }
           
        
        curr = curr->next;
    } 
    
}
////////////////////////////////////////////////////////////////////////////////
//                            Stage 2 Functions                               //
////////////////////////////////////////////////////////////////////////////////
// Add an enemy to the realm.
int new_enemy(Realm realm, char *location_name, char *name, int hp) {
    struct enemy *new_enemy = malloc(sizeof(struct enemy));
    strcpy(new_enemy->name,name);
    new_enemy->health = hp;
    new_enemy->next = NULL;
    new_enemy->max_health = hp;
    
	struct location *curr_instant = find_location(realm, location_name);
	if (curr_instant == NULL) {
	    return ERROR_NO_LOCATION;
	}
	
	
	struct enemy *curr1 = curr_instant->enemies;
	if (curr1 == NULL) {
            curr_instant->enemies = new_enemy;
    }
    else {
        
        while (curr1->next != NULL) {
                
            curr1 = curr1->next;
        }
            curr1->next = new_enemy;
    }
    return SUCCESS;
}

// Add a new tower to the realm.
int new_tower(Realm realm, char *prev_name, char *name, int power, int uses) {
    // finding prev location
    struct location *prev_loc = find_location(realm, prev_name);    
    if (prev_loc == NULL) {
        return ERROR_NO_LOCATION;
    }

    struct location *new_loc = malloc(sizeof(struct location));
    if (new_loc == NULL) {
        return ERROR_NO_LOCATION;
    
    }
    strcpy(new_loc->name,name);
    new_loc->pow = power;
    new_loc->use = uses;
    new_loc->effect = EFFECT_NONE;
    new_loc->type = TYPE_TOWER;  
    if (new_loc->use < 1) {
        return ERROR_INVALID_STAT;
    
    }
    
    // Inserting the new location into desired place.
    
    new_loc->next = prev_loc->next;
    prev_loc->next = new_loc;
   
    return SUCCESS;
}
////////////////////////////////////////////////////////////////////////////////
//                              Stage 3 Functions                             //
////////////////////////////////////////////////////////////////////////////////

// Destroy the realm, and free any associated memory.
void destroy_realm(Realm realm) {
    /*   
    struct location *curr1 = realm->castle;
    while (curr1  != NULL ) {
        struct enemy *tmp = realm->castle->enemies;
        while (curr1->enemies  != NULL) {
            tmp = curr1->enemies->next;
            free(curr1->enemies);
            curr1->enemies = tmp;
        }
        free(tmp);
       
        curr1 = curr1->next;
    }
    curr1 = realm->castle;
    while (realm->castle != NULL) {
        curr1 = realm->castle->next;
        free(realm->castle);
        realm->castle = curr1;  
    }
    
  
    struct location *curr2 = realm->lair;
    while (curr2  != NULL ) {
        if (realm->lair == NULL)break;
        struct enemy *tmp = realm->lair->enemies;
        while (curr2->enemies  != NULL) {
            tmp = curr2->enemies->next;
            free(curr2->enemies);
            curr2->enemies = tmp;
        }
        free(tmp);
       
        curr2 = curr2->next;
    }
    curr2 = realm->lair;
    while (realm->lair != NULL) {
        curr2 = realm->lair->next;
        free(realm->lair);
        realm->lair = curr2;  
    }
    free(curr2);
    free(curr1);

    free(realm);
    */
    
    
}

// Advance enemies towards the castle.
int advance_enemies(Realm realm) {
    return 0;
}

// Apply damage from the enemies at each tower to that tower.
int apply_damage(Realm realm) {
    return 0;
}

////////////////////////////////////////////////////////////////////////////////
//                             Stage 4 Functions                              //
////////////////////////////////////////////////////////////////////////////////

// Apply the specified buff to the relevant towers or enemies.
int apply_buff(Realm realm, char *search_term, Buff buff, int amount){
    return 0;
}

////////////////////////////////////////////////////////////////////////////////
//                             Stage 5 Functions                              //
////////////////////////////////////////////////////////////////////////////////

// Apply the specified effect to each tower whose name matches the
// specified search term.
int apply_effect(Realm realm, char *search_term, Effect effect) {
    return 0;
}

////////////////////////////////////////////////////////////////////////////////

// Add definitions for your own functions below.
// Make them static to limit their scope to this file.
static struct location *find_location(Realm realm, char *name) {
    struct location *curr = realm->castle;
    while (curr != realm->lair) {
	    // point the enemy to the list after the desirable location.
	    // point the desrable location to the enemy. 
	    if (strcmp(name, curr->name) == 0) {
	         return curr; 
	    }
	    curr = curr->next;
	}
	return NULL;
}

////////////////////////////////////////////////////////////////////////////////
//                          Provided print functions                          //
//               NOTE: YOU SHOULD NOT MODIFY THE FOLLOWING FUNCTIONS          //
////////////////////////////////////////////////////////////////////////////////

void print_tower(char *name, int power, int uses, int effect) {
    printf(" ^ %32s [pow: %3d | uses: %3d]", name, power, uses);
    if (effect == EFFECT_NONE) printf(" {%c}", EFFECT_NONE_CHAR);
    if (effect == EFFECT_PORTAL) printf(" {%c}", EFFECT_PORTAL_CHAR);
    if (effect == EFFECT_ICE) printf(" {%c}", EFFECT_ICE_CHAR);
    printf("\n");
}

void print_land(char *name) {
    printf(" ^ %32s [____________________]\n", name);
}

void print_castle(char *name, int defense) {
    printf(" ^ %32s [Castle Defenses: %3d]\n", name, defense);
    
}

void print_enemy(char *name, int cur_hp, int max_hp) {
    printf(" ^ %40s [hp: %d/%d]\n", name, cur_hp, max_hp);
    
}

////////////////////////////////////////////////////////////////////////////////
//                   End of provided print functions                          //
////////////////////////////////////////////////////////////////////////////////




