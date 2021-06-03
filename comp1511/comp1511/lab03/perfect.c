// Perfect Demo
// By Jawad Tanana (z5320158)
// Created on 17/06/2020

#include <stdio.h>

int main(void){
    int integer, i = 1, sum = 0;
    printf("Enter number: ");
    scanf("%d", &integer);
    
     
    if (integer % 2 == 0) { //Testing if the integer is a positive number
        printf("The factors of %d are: \n", integer);
        while (i <= integer) {
            if (integer % i == 0) { //print all the factors until finished
                printf("%d\n", i);
                if (i < integer) { /*will sum all the factors. if i place it
                     outside will not know which is a factor and which isn't*/
                sum = sum + i;
            }
            }
            i++;   
        }
        if (sum == integer) { /*check if the sum of the factors equal the 
                                integer*/ 
            //printf("Sum of factors = %d\n", sum); Test for the numbers
            printf("Sum of factors = %d\n", sum + integer);
            printf("%d is a perfect number\n", integer);
        }
        else { /*if the sum was not equal then it will print that it is not a 
               perfect number*/ 
               //printf("Sum of factors = %d\n", sum); Test for the numbers
            printf("Sum of factors = %d\n", sum + integer);
            printf("%d is not a perfect number\n", integer);
        }
    }
    else { /*if the first condition was not met this will print the factors 
           sum and then sum the numbers and print it was not a perfect number.*/  
        printf("The factors of %d are: \n", integer);
        while (i <= integer) {
            if (integer % i == 0) { //print all the factors until finished
                printf("%d\n", i);
                if (i < integer) { /*will sum all the factors. if i place it
                     outside will not know which is a factor and which isn't*/
                sum = sum + i;
            }
            }
            i++;   
        }
        //printf("Sum of factors = %d\n", sum); test for the numbers
        printf("Sum of factors = %d\n", sum + integer);
        printf("%d is not a perfect number\n", integer);
    }
}
