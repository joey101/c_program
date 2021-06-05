#include <stdio.h>

int fib(int number);

int main (int argc, int *argv[]) {

    int number;
    while (scanf("%d", &number) != EOF) {
        if (number == 0) {
            printf("%d\n", number);
        }
        else if (number == 1) {
            printf("%d\n", number);
        
        }
        else {
            printf("%d\n",fib(number));
        }
    }
}

int fib(int number) {
    int tmp_1;
    int second = 1;
    int start = 1;
    int i = 0;

    while(i <= number) {
        tmp_1 = second;
        second = tmp_1 + start;
        start = tmp_1;
        i++;
    }
    return second;
}
