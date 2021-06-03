// X drawer Demo
// By Jawad Tanana (z5320158)
// Created on 19/06/2020
#include <stdio.h>

int main(void){
    int size, i, j = 0;
    printf("Enter size: ");
    scanf("%d", &size);
    
    while (j < size) { 
        i = 0;
        while (i < size) {
            if (j == i || i == (size - j - 1)) {
                printf("*");
            }
            else {
                printf("-");
            }
            i++;
        }
        printf("\n");
        
        j++;
    }
    
}
