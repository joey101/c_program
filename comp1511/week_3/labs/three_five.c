// Prints all the numbers divisble by 3 or 5, in ascending order
// By Jawwad Tanana (z5320158)


#include <stdio.h>

int main(void) {
    int number;
    printf("Enter a number: ");
    // This scanf is in an if-statement to test if it is a positive number.
    if (scanf("%d", &number) > 0) {
        int i = 1;
        // While Loop, loops to print numbers from zero until specified number.
        while (i < number) {
            // This if statement tests if the number is divisble by 3 or 5.
            if (i % 3 == 0 || i % 5 == 0) {
                printf("%d\n", i);
            
            }
            i++;
        }


    } else {
        printf("We need a positive number bro!");
    }

}
