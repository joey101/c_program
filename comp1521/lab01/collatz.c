#include <stdio.h>
#include <stdlib.h>

int check_odd(int number);
void collatz_recur(int number);



int main (int argc, char *argv[]) {
   
    if (argc == 1) {
        printf("Usage: %s NUMBER\n", argv[0]);
        return 1;    
    }
    int number = atoi(argv[1]);

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
