#include <stdio.h>

int main () {
    int first, second, sum;
    printf("Please enter two integers: ");
    scanf("%d %d", &first, &second);
    sum = first + second;
    
    // First set of if statements prints the first number with negative infront
    // if it is a negative number.


    if (first < 0 && first > -10){
        printf("negative ");
    }
    if (first == 10 || first == -10) {
        printf("ten ");
    } else if (first == 9 || first == -9) {
        printf("nine ");
    } else if (first == 8 || first == -8) {
        printf("eight ");
    } else if (first == 7 || first == -7) {
        printf("seven ");
    } else if (first == 6 || first == -6) {
        printf("six ");
    } else if (first == 5 || first == -5) {
        printf("five ");
    } else if (first == 4 || first == -4) {
        printf("four ");
    } else if (first == 3 || first == -3) { 
        printf("three ");
    } else if (first == 2 || first == -2) {
        printf("two ");
    } else if (first == 1 || first == -1) {
        printf("one ");
    } else if (first == 0) {
        printf("zero ");
    } else { // This prints the number if out of range.
        printf("%d ", first);
    }

    printf("+ ");  
    
    // Second set of if statements prints the second set of numbers
    // if it is a negative number with negative infront.
   
    if (second < 0 && second > -10){
        printf("negative ");
    }
    if (second == 10 || second == -10) {
        printf("ten ");
    } else if (second == 9 || second == -9) {
        printf("nine ");
    } else if (second == 8 || second == -8) {
        printf("eight ");
    } else if (second == 7 || second == -7) {
        printf("seven ");
    } else if (second == 6 || second == -6) {
        printf("six ");
    } else if (second == 5 || second == -5) {
        printf("five ");
    } else if (second == 4 || second == -4) {
        printf("four ");
    } else if (second == 3 || second == -3) { 
        printf("three ");
    } else if (second == 2 || second == -2) {
        printf("two ");
    } else if (second == 1 || second == -1) {
        printf("one ");
    } else if (second == 0) {
        printf("zero ");
    } else { // This prints the number if out of range.
        printf("%d ", second);
    } 
    
    printf("= ");
    // Third set of if statements prints the third set of numbers if it is a
    // negative number with negative infront.
    if (sum < 0){
        printf("negative ");
    }
    if (sum == 10 || sum == -10) {
        printf("ten ");
    } else if (sum == 9 || sum == -9) {
        printf("nine ");
    } else if (sum == 8 || sum == -8) {
        printf("eight ");
    } else if (sum == 7 || second == -7) {
        printf("seven ");
    } else if (sum == 6 || sum == -6) {
        printf("six ");
    } else if (sum == 5 || sum == -5) {
        printf("five ");
    } else if (sum == 4 || sum == -4) {
        printf("four ");
    } else if (sum == 3 || sum == -3) { 
        printf("three ");
    } else if (sum == 2 || sum == -2) {
        printf("two ");
    } else if (sum == 1 || sum == -1) {
        printf("one ");
    } else if (sum == 0) {
        printf("zero ");
    } else { // This prints the number if out of range.
        printf("%d", sum);
    }
    printf("\n");


    return 0;
}