// COMP1511 Encrypting Text with a Caesar Cipher

// This program was written by Jawad Tanana (z5320158)
// on 14/07/2020

#include <stdio.h>
#include <math.h>

int cipher(int character, int move);

int main(void) {
    int move;
    
    scanf(" %d ", &move);
    
    
    int character;
    character = getchar();
    
    while (cipher(character, move) != EOF) {
    
        putchar(cipher(character, move));        
        character = getchar();
    }  
}

int cipher(int character, int move){
    
    if (character >= 'a' && character <= 'z') {
        int a = 0;
        a = (character - 'a' + move) % 26;
        character = a + 'a';
        
    }
    else if (character >= 'A' && character <= 'Z') {
        int A = 0;
        A = (character - 'A' + move) % 26;
        character = A  + 'A'; 
       

    }
    if (character < 0) {
        
    
    

    return character;
    
}
