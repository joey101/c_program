// The goal of this program is to remove the upercases in a sentence.
// By Jawad Tanana z5320158
// 3/06/2021


#include <stdio.h> 



int main () {

    char sentence[10];

    if (fgets(sentence, 10, stdin) != NULL) {

        printf("%s", sentence);

    }


    return 0;
}