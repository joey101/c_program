//z5320158 jawad z5320158
//01/07/2020


#include <stdio.h>
#include <math.h>

int main(void){
    int amount;
    printf("How many numbers: ");
    scanf("%d", &amount);
    int new_number = 0;
    int i = 0;
    while (i < amount) {
        int number;
        
        scanf("%d", &number);
        
        new_number = number + new_number;
        
        i++;
    }
    printf("The sum is: %d\n", new_number);


}