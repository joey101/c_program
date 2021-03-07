// A simple C program that attempts to be punny
// by Jawad Tanana (z5320159@ad.unsw.edu.au0
// Prints integers from smallest to largest

#include <stdio.h>

int main(void) {
    int first, second, third;
    int smallest, medium, largest;
    
    printf("Enter a number: ");
    scanf("%d", &first);
    printf("\n");
    printf("Enter a number: ");
    scanf("%d", &second);
    printf("\n");
    printf("Enter a number: ");
    scanf("%d", &third);
    printf("\n");
    

    if (first < second && second < third) {
        smallest = first;
        medium = second;
        largest = third;
    }
    else if (second < first && first < third) {
        smallest = second;
        medium = first;
        largest = third;
    }
    else if (third < first && first < second) {
        smallest = third;
        medium = first;
        largest = second;
    }
    else if (third < second && second < first) {
        smallest = third;
        medium = second;
        largest = first;
    }


    printf("The integers in order are: %d, %d, %d \n", smallest, medium, largest);

}
