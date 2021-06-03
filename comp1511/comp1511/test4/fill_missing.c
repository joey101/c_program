// z5320158
// Jawad Tanana


#include <stdio.h>

#define MAX 1000
int missing(int number[], int num);


int main () {
    

    int number[MAX];
    int i = 0;
 
    while((number[i] = scanf("%d", &number[i]))  != EOF) {
        
        i++;  
    }
    
    for (int j = 0; j < number; j++) {
        printf("%d,", missing(number, num));
    }
    printf("\n");
}

int missing(int number[], int num) {
    int biggest = 0;
    int j = 0;
    // finds the largest number in an array
    while ( j < MAX ) {
        if (number[j] > biggest) {
            biggest = number[j];
        }
        j++;
    }
    return biggest;
    
    // find the missing numbers
    for (int h = 0; h < biggest; h++) {
        num
    }
    return num;
}


