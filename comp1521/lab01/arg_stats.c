#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {
    int min = 100;
    int max = 0;
    int sum = 0;
    int prod = 1;
    int mean;
    
    for (int i = 1; i < argc; i++) {
        int number = atoi(argv[i]);
        if (number < min) {
            min = number;
        }
        if (number > max) {
            max = number;
        }

        sum += number;
        prod = prod * number;
    }
    mean = sum / (argc-1);
    




    printf("MIN:  %d\n", min);
    printf("MAX:  %d\n", max);
    printf("SUM:  %d\n", sum);
    printf("PROD: %d\n", prod);
    printf("MEAN: %d\n", mean);
   


    return 0;
}
