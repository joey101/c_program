// COMP1511 Its a Case of Swapping

// This program was written by Jawad Tanana (z5320158)
// on 14/07/2020

#include <stdio.h>
#include <ctype.h>

int swap_case(int character);

int main(void) {
 
    int character;
    character = getchar();
    
    while (character != EOF) {
            
        putchar(swap_case(character)); 
        character = getchar();
        
    }
    // printf("\n");
}

int swap_case(int character) {
    
    // Make upper case
    if (character >= 'a' && character <= 'z') {
        character = character - 'a' + 'A';
        return character;
    } // Make lower case
    else if (character >= 'A' && character <= 'Z') {
        character = character - 'A' + 'a';
        return character; 
    }
    return character;
    
}