/*******************************************************************************
 * 48430 Fundamentals of C Programming - Assignment 2
 * Name: 
 * Student ID:
 * Date of submission:
 * A brief statement on what you could achieve (less than 50 words):
 * 
 * 
 * A brief statement on what you could NOT achieve (less than 50 words):
 * 
 * 
*******************************************************************************/

/*******************************************************************************
 * List header files - do NOT use any other header files. Note that stdlib.h is
 * included in case you want to use any of the functions in there. However the
 * task can be achieved with stdio.h and string.h only.
*******************************************************************************/

#include <stdlib.h>
#include <stdio.h>

/*******************************************************************************
 * List preprocessing directives - you may define your own.
*******************************************************************************/

#define MAX_COMPANY_SIZE 5
#define MAX_NAME_SIZE 11

/*******************************************************************************
 * List structs - you may define struct date_time and struct flight only. Each
 * struct definition should have only the fields mentioned in the assignment
 * description.
*******************************************************************************/
typedef struct date_t{
		int day;
		int month;
		int year;
	} date_t;
/*typedef struct date_t Birthday;*/
/*******************************************************************************
 * Function prototypes - do NOT change the given prototypes. However you may
 * define your own functions if required.
*******************************************************************************/
void printMenu(void);
void addEmployee(void);
/*******************************************************************************
 * Main
*******************************************************************************/
int main(void){

    /*printMenu();*/
    
	/*char dbFileName[] = "database";*/
	
	int selection;

 
	

	while(1){
		
		printMenu();
		printf("Enter your choice>");
		scanf(" %d" , &selection);

		switch (selection) {
		case 1:
			
			addEmployee();
			break;
		case 2:
			printf("13\n");
			break;
		case 6:
			exit(0);

		default:
			printMenu();
			printf("Enter your choice>");
		}
	}
	
	
/*
	int input;
	
	printf("please enter an option: ");
	scanf("%d", &input);

	
	if(input == 1){
		addEmployee();
		printf("please add an employee");
	}
	else{printf("skipped");}
	*/

    return 0;
}

/*******************************************************************************
 * This function prints the initial menu with all instructions on how to use
 * this program.
 * inputs:
 * - none
 * outputs:
 * - none
*******************************************************************************/
void printMenu(void){
    printf("\n\n"
    	"1. add employee\n"
    	"2. delete last employee\n"
    	"3. display employee list\n"
    	"4. save the employee list to the database\n"
    	"5. read the employee list from the database\n"
    	"6. exit the program\n");
}

void addEmployee(void){
	char name[10];
	float tfe;



	date_t birthday;
	
	printf("Enter name>");
	scanf("%s", name);

	printf("Enter birthday: day>");
	scanf("%d", &birthday.day); /* scan("%d", $birthday);*/
	
	printf("Enter birthday: month>");
	scanf("%d", &birthday.month);

	printf("Enter birthday: year>");
	scanf("%d", &birthday.year); 

	printf("Enter FTE>");
	scanf("%f", &tfe);

	/*if() day needs to 1 => day <= 31
	if(birthday > 0 && birthday < 31){birthday.year = birthday}
	*/
 

}
