// The goal of this program is to remove the upercases in a sentence.
// By Jawad Tanana z5320158
// 3/06/2021


#include <stdio.h> 
#include <string.h>

#define MAX_LEN 1024

int main () {

    char sentence[MAX_LEN];

    while (fgets(sentence, MAX_LEN, stdin) != NULL) {
        
        int length  = strlen(sentence);
        int even = length % 2;
        if (even == 0) {
            fputs(sentence, stdout);
        }
    }
    


    return 0;
}