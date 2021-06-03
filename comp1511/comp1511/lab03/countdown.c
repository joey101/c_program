// Order3 Demo
// By Jawad Tanana (z5320158)
// Created on 17/06/2020

#include <stdio.h>

int main(void){
    //initialise counter to 1
    int counter = 10; 
    
    while (counter >= 0) { // Have printed all numbers between 1 and counter
        // print counter
        printf("%d\n", counter);
        // increment counter
        counter = counter - 1; 
    } 
    return 0;
}
