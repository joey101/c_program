// Hollow Triangle Demo
// By Jawad Tanana (z5320158)
// Created on 19/06/2020
#include <stdio.h>

int main(void){
    int size, i, j = 1;
    printf("Enter size: ");
    scanf("%d", &size);
    
    while (j <= size) { 
        i = 1;
        while (i <= size) {
            if (i == 1 || i == j || j == size) {
                printf("*");
            }
            else {
                printf(" ");
            }
            i++;
        }
        printf("\n");
        
        j++;
    }

}
