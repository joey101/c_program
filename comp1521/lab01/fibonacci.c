#include <stdio.h>

int fib(int number);

int main () {

    int number;


    while (scanf("%d", &number) != EOF) {
     
        printf("%d\n", fib(number));
     
    }
}
int fib(int number) {
    
    if (number == 0 || number == 1) {
        return number;
    } else {
        return (fib(number-1) + fib(number-2));
    }
    
}

