/* The purpose of this program is to add two numbers */
#include <stdio.h>

int main () {
    int a, b, sum; // This initiates the variables I am going to use.
    printf("Please enter two integers: ");
    scanf("%d %d", &a, &b); // This commad allows me to input numbers into the
                            // terminal.

    sum = a + b;
    printf("%d + %d = %d", a, b, sum);


}