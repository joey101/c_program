// The goal of this program is to remove the upercases in a sentence.
// By Jawad Tanana z5320158
// 3/06/2021

#include <stdio.h> 

int dehead(int letter);
int main () {
    
    
    int character = getchar();
    while (character != EOF) {
        
        putchar(dehead(character)); 
        character = getchar();

    
    }
    
}

int dehead(int letter) { 
    
    if(letter >= 65 && letter <= 95 ) {
        letter += 32;
    }

    return letter;

}
