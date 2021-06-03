// Order3 Demo
// By Jawad Tanana (z5320158)
// Created on 16/06/2020
#include <stdio.h>



int main(void){
    int no_1;
    printf("Enter integer: ");    
    scanf("%d", &no_1);
    int no_2;
    printf("Enter integer: ");    
    scanf("%d", &no_2);
    int no_3;
    printf("Enter integer: ");    
    scanf("%d", &no_3);
    
    if (no_1 <= no_2 && no_1 <= no_3 && no_2 <= no_3) {
        //ABC
        printf("The integers in order are: %d %d %d\n", no_1, no_2, no_3);
    } 
    else if (no_1 <= no_2 && no_1 <= no_3 && no_2 >= no_3) {
        //ACB
        printf("The integers in order are: %d %d %d\n", no_1, no_3, no_2);
    }  
    else if (no_2 <= no_1 && no_2 < no_3 && no_1 <= no_3) {
        //BAC
        printf("The integers in order are: %d %d %d\n", no_2, no_1, no_3);
    } 
    else if (no_2 <= no_1 && no_2 < no_3 && no_1 >= no_3) {
        //BCA
        printf("The integers in order are: %d %d %d\n", no_2, no_3, no_1);
    }
    else if (no_3 <= no_1 && no_3 < no_2 && no_2 >= no_1) {
        //CAB
        printf("The integers in order are: %d %d %d\n", no_3, no_1, no_2);
    }
    else if (no_3 <= no_1 && no_3 < no_2 && no_2 <= no_1) {
        //CBA
        printf("The integers in order are: %d %d %d\n", no_3, no_2, no_1);
    } 
    else {
        printf("Failed to put in order!\n");
    }
    return 0;
}
