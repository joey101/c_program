// COMP1511 Devowelling sentences

// This program was written by Jawad Tanana (z5320158)
// on 14/07/2020

#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define VOWELS 6
int is_vowel(int character);

int main (void) {
    
    int character;
    character = getchar();
    
    while (character != EOF) {
        
        if (is_vowel(character) != 1)
        
        putchar(character); 
        character = getchar();
    }
    
}

// Loop through the input line and fine the vowels.
int is_vowel(int character) {
   
    char vowels[] = "aeiou";
    for(int i = 0; i != character; i++) { 
        // Checks the characters for the vowels. 
        for (int j = 0; j < VOWELS; j++) {
            if (character == vowels[j]) {
                return 1;
            }     
        }   
    }
    return 0;
    
}
