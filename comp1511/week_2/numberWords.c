#include <stdio.h>


int main() {
    int number;
    printf("Please enter an interger: ");
    scanf("%d", &number);

    if (number <= 0) {
        printf("You entered a number less than one.");

    } else if (number > 5) {

        printf("You entered a number greater than five.");

    } else if (number == 1) {

        printf("You entered one");

    } else if (number == 2) {

        printf("You entered two");

    } else if (number == 3) {

        printf("You entered three");

    } else if (number == 4)  {

        printf("You entered four");

    } else if (number == 5)  {

        printf("You entered five");

    }
    
    



    return 0;
}