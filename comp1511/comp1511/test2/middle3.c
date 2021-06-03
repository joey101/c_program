//z5320158 jawad z5320158
//01/07/2020


#include <stdio.h>

int main(void){
    int a, b, c;
    
    printf("Enter integer: ");
    scanf("%d",&a);
    printf("Enter integer: ");
    scanf("%d",&b);
    printf("Enter integer: ");
    scanf("%d",&c);
    
    if ((a <= b && a >= c) || (a >= b && a <= c)) {
        printf("Middle: %d\n", a);
    }
    else if ((b <= a && b >= c) || (b >= a && b <= c)){
        printf("Middle: %d\n", b);
    }
    else if ((c >= a && c <= b) || (c <= a && c >= b)) { 
        printf("Middle: %d\n", c);
    }
}
