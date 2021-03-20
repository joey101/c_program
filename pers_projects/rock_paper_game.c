#include <stdio.h>
#include<stdlib.h>

int main(void) {
    

    char name[100];
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Welcome to rock, paper, scissors %s.\n", name);
    printf("Loading...\n");
    
    int scissors = 1;
    int paper = 2;
    int rock = 3;
    int spock = 4;
    int user_input;
    int comp_choice;


    printf("Rules:\n scissors = 1 \n paper = 2 \n rock = 3 \n spock = 4 \n");

    printf("Please input a value: ");
    scanf("%d", &user_input);
    comp_choice = rand() + %3 + 1;
    
    if (user_input == 1 && comp_ 






}
