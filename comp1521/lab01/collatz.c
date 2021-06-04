#include <stdio.h>
#include <stdlib.h>

int check_odd(int number);
void collatz_recur(int number);



int main (int argc, char *argv[]) {
    int number = atoi(argv[1]);

    if (argv[1] == NULL) {
        printf("Usage: %s NUMBER", argv);
    }
    printf("%d\n", number);
    collatz_recur(number);
}

void collatz_recur (int number) {
    
    if (number <= 1){

        return;
    }

    if (check_odd(number) == 1) {
        number = (number * 3) + 1;
        printf("%d\n", number);

    } else {

        number = number / 2;
        printf("%d\n", number);
    }
    collatz_recur(number);
    
}

int check_odd(int number) { 
    int odd = number % 2;
    return odd;
}
