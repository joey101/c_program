// Reads a positive integer n from standard input and prints all the factors 
// of n, their sum and indicates whether n is a perfect number.
// By Jawad Tanana (z5320158)

#include <stdio.h>

int main(void) {
    int number;

    printf("Enter number: ");
    scanf("%d",&number);

    printf("The factors of %d are:", number);
    for (int i = 0; i <= number; i++) {
        if ((i % number) == 0) { 
            printf("%d", i);
        }


    }



}


