#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {
    int min = 100;
    int max = 0;
    int sum = 0;
    int prod = 1;
    int mean = 0;
    char random;
    int number[argc] = strtol(*argv, &random ,10);

    for (int i = 0; i < argc; i++) {
        if (number[i] < min) {
            min = number[i];
        }
        if (number[i] > max) {
            max = number[i];
        }
        sum += number[i];
        prod = prod * number[i];
        mean = sum / argc;
    }
    printf("MIN: %d", min);
    printf("MAX: %d", max);
    printf("SUM: %d", sum);
    printf("PROD: %d", prod);
    printf("MEAN: %d", mean);
   


    return 0;
}