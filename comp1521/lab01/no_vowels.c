// The goal of this program is to devowel a sentence.
// By Jawad Tanana z5320158
// 2/06/2021
#include <stdio.h>
 
int devowel(int letter);

int main () {
    char input;
    char sentence[];


    scanf("%c", &input);
    for (int i = 0; i < sizeof(sentence); i++) { 


    }

    while (input != EOF) { 
        scanf("%c", &input);
    


    }

}

int devowel(int letter) { 
    
    char vowels[] = "aeiouAEIOU";

    for (int j = 0; j < sizeof(letter); j++) {    
        for (int i = 0; i < sizeof(vowels); i++) {
            if (letter[j]) == vowels[i] {
                return 1;
            }

        }
    }
    return 0
}
