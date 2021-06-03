// Multiply
//Jawad z5320158

#include <stdio.h>

int main(void) {
    int no_1, no_2, positive_1, positive_2;
    scanf("%d %d", &no_1, &no_2);
    
    if (no_1 == 0 || no_2 == 0) {
        printf("zero\n");
    }
    else if (no_1 < 0 && no_2 > 0) {
        positive_1 = -no_1;
        printf("%d\n", positive_1 * no_2);
    }
    else if (no_2 < 0 && no_1 > 0) {
        positive_2 = -no_2;
        printf("%d\n", positive_2 * no_1);
    }
      else if (no_2 < 0 && no_1 < 0) {
        positive_2 = -no_2;
        positive_1 = -no_1;
        printf("%d\n", positive_2 * positive_1);
    }
    else {
         printf("%d\n", no_1 * no_2);
   }
    
    return 0;


}


