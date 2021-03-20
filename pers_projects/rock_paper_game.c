#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    // Initiating all the variable that are going to be used.
    char name[100];
    int scissors = 0;
    int paper = 1;
    int rock = 2;
    int spock = 3;
    int lizard = 4;
    int user_input;
    int comp_choice;
    int opp = 0;
    int play = 0;

    // Introducing the game and the person personally.
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Welcome to rock, paper, scissors %s.\n", name);
    printf("Loading...\n");
    
    // Printing the rules out to the players, going to use a number conversion
    // rather than string matching.
    printf("Rules:\n Scissors = 0 \n Paper = 1 \n Rock = 2 \n Spock = 3 \n Lizard = 4 \n");
    
    // Trying to get a users input and a generate a random number.
    srand(time(NULL));
    printf("Please input a value: ");
    scanf("%d", &user_input);
    comp_choice = 0 + rand() % 4 + 1;
    
    // IF statements to proceed the game.
    for (int c = 0; c < 3; c++) {
        if (user_input < 4 || user_input > 0) {   
            if (user_input == comp_choice) {
                printf("You tied. \n");
                c -= 1;
                printf("Lets play again\n Best of 3 \n");
            } 
            else if (user_input == scissors) {
                if (comp_choice == rock || comp_choice == spock) {
                    printf("You lost damn!!!\n");
                    printf("Lets play again\n Best of 3 \n So far %d / 3\n", c);
                    opp += 1;
                }
                else if ( comp_choice == paper || comp_choice == lizard) {
                    printf("You won well done!!\n");
                    printf("Lets play again. \n Best of 3. \n So far %d / 3\n", c);
                    play += 1;
                }
            }
            else if (user_input == paper) {
                if (comp_choice == rock || comp_choice == spock) {
                    printf("You won well done!!\n");
                    printf("Lets play again. \n Best of 3. \n So far %d / 3\n", c);
                    play += 1;
                }
                else if (comp_choice == scissors || comp_choice == lizard) {
                    printf("You lost damn!!\n");
                    printf("Lets play again. \n Best of 3. \n So far %d / 3\n", c);
                    opp += 1; 
                }
            }
            else if (user_input == rock) {
                if (comp_choice == spock || comp_choice == paper) {
                    printf("You lost damn!!\n");
                    printf("Lets play again. \n Best of 3. \n So far %d / 3\n", c);
                    opp += 1;
                }
                else if (comp_choice == scissors || comp_choice == lizard) {
                     printf("You won well done!!\n");
                    play += 1; 
                }
            }
            else if (user_input == spock) {
                if (comp_choice == scissors || comp_choice == rock) {
                    printf("You won well done!!\n");
                    printf("Lets play again. \n Best of 3. \n So far %d / 3\n", c);
                    play += 1;
                }
                else if (comp_choice == lizard || comp_choice == paper) {
                    printf("You lost damn!!\n");
                    printf("Lets play again. \n Best of 3. \n So far %d / 3\n", c);
                    opp += 1;
                }
            }
            else if (user_input == lizard) {
                if (comp_choice == scissors || comp_choice == rock) {
                    printf("You lost damn!!\n");
                    printf("Lets play again. \n Best of 3. \n So far %d / 3\n", c);
                    opp += 1;            
                } 
                else if (comp_choice == spock || comp_choice == paper) {
                    printf("You won well done!!\n");
                    printf("Lets play again. \n Best of 3. \n So far %d / 3\n", c);
                    play += 1;

                }
            }
            printf("--------------------------------------------------------------\n");
            printf("Rules:\n Scissors = 0 \n Paper = 1 \n Rock = 2 \n Spock = 3 \n Lizard = 4 \n");
            printf("Please input a value: ");
            scanf("%d", &user_input);
            comp_choice = 0 + rand() % 3 + 1;
            printf("Computer Choice = %d\n", comp_choice);
        } 
        else {
            printf("Between 0 and 4 please.\n");
            c -= 1;
        }
    }
    // IF loop to print out who won.
    if (opp > 2) {
        printf("You lost against the computer!!\n");
    } 
    else {
        printf("Well done you beat the computer!!\n");
    }

}
