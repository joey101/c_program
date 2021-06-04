// The goal of this program is to devowel a sentence.
// By Jawad Tanana z5320158
// 2/06/2021

#include <stdio.h> 

int devowel(char letter);

int main () {
    
    char input;

    while (scanf("%c", &input) != EOF) {
        int result = devowel(input);
        
        if (result == 0) {
            printf("%c", input);

        } 
        
    
    }
    
}

int devowel(char letter) { 
    
    if(letter =='A' || letter =='a' || letter =='E' || letter =='e' || 
       letter =='I' || letter =='i' || letter =='O' || letter =='o' || 
       letter =='U' || letter =='u') {
            return 1;
    }
        
    

    return 0;

}
