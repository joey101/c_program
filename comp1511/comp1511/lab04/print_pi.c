// Prints the first n digits of pi, where n is specified Demo
// By Jawad Tanana (z5320158)
// Created on 22/06/2020

//libraries declaration
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

//constant declaration
#define MAX_DIGITS 10

int main(void) {
    int pi[MAX_DIGITS] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3};
    printf("How many digits of pi would you like to print? ");
    //TODO: Insert your code here
      
    int amount; 
    scanf("%d", &amount); //recieve input for how many digits the user wants.
    
    if (amount > 10) { //if it is more than ten digits close the program
        printf("Invalid input, only 10 digits!\n");
    }
    else if (amount == 1) {
        printf("3\n");
    } 
    else if (amount == 0) {
        printf("\n");
    }
    else {
        printf("3.");     
        for(int i = 1; i < amount; i++) {
             printf("%d", pi[i]);
        }
        printf("\n");
    }
    
    return 0;
}


