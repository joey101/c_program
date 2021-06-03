// COMP1511 Encrypting Text with a Substitution Cipher

// This program was written by Jawad Tanana (z5320158)
// on 14/07/2020

#include <stdio.h>

#define MAXLENGTH 26

char coder(int character, char cipher[MAXLENGTH]);

int main(void) {
    char cipher[MAXLENGTH];
    for (int i = 0; i < (MAXLENGTH); i++) {
        cipher[i] = getchar();
    }
    getchar();
    int character;
    character = getchar();
     
    while (coder(character, cipher) != EOF) {
    
        putchar(coder(character, cipher));        
        character = getchar();
    }  
}

char coder(int character, char cipher[MAXLENGTH]){
    
    if (character >= 'a' && character <= 'z') {
        int temp = character - 'a';
        character = cipher[temp];
        
        
    }
    else if (character >= 'A' && character <= 'Z') {
        int temp = character - 'A';
        character = cipher[temp] - 'a' + 'A' ;
    }
    

    return character;
    
}
