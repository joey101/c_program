// Scan in an array.
// Created by
//  ... (z0000000)
// Created on 2019-??-??

#include <stdio.h>
#include <assert.h>

#define MAX_SIZE 126


int main () {
    
    
    int i = 32;
    while (i <= MAX_SIZE) {
        
        printf("%d ", i);
        printf("0x%x ", i);
        printf("%c", i);
        printf("\n");
    
        i++;
    }


}