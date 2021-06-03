// Three_five Demo
// By Jawad Tanana (z5320158)
// Created on 17/06/2020

#include <stdio.h>

int main(void){
    //initialise counter to 1
    int counter, number = 1;
    printf("Enter number: ");
    scanf("%d", &counter);
    
    while (number < counter) {
        if (number % 3 == 0 || number % 5 == 0) { 
            // print number
            printf("%d\n", number);
            // increment counter
             
        } 
        number = number + 1;
    }
    return 0;
}








