// The goal of this program is to devowel a sentence.
// By Jawad Tanana z5320158
// 2/06/2021
#include <stdio.h>
 
int devowel(char letter[]);

int main () {
    int length = 100;
    char input[length];
    

    while (scanf("%[^\n]s", &input) != EOF) {


        devowel(input);
        printf("%s", input);
        
        scanf("%[^\n]s", &input);
    }
}

int devowel(char letter[]) { 
    int i = 0;
    while (letter[i] != '\0') {

        if(letter[i] =='A' || letter[i] =='a' || letter[i] =='E' || 
           letter[i] =='e' || letter[i] =='I' || letter[i] =='i' || 
           letter[i] =='O' || letter[i] =='o' || letter[i] =='U' || 
           letter[i] =='u') {
               
               for (int j = 0; letter[j] != '\0'; j++) {
                   letter[j] = letter[j + 1];

               }
        }
        i++;
    }
    return *letter;

}
