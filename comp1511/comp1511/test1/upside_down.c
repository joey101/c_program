// upside down
//Jawad z5320158

#include <stdio.h>

int main(void) {
    double no_1, no_2, no_3;
    printf("Please enter three numbers:");
    scanf("%lf%lf%lf", &no_1, &no_2, &no_3);
      
    if (no_1 < no_2 && no_2 < no_3) {
        printf(" up\n");
    }
    else if (no_1 > no_2 && no_2 > no_3) {
        printf(" down\n");
    }
    else {
        printf(" neither\n");
    }

}


