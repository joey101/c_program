/*******************************************************************************/

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
struct date{
    unsigned int day;
    unsigned int month;
    unsigned int year;
};
typedef struct  date date_t;

struct employee{
    char name[MAX_NAME_SIZE];
    float fte;
    date_t birthday;
};

typedef struct employee employee_t;

/*******************************************************************************
 * Function prototypes - do NOT change the given prototypes. However you may
 * define your own functions if required.
*******************************************************************************/
void printMenu(void);
void addEmployee(employee_t *, int *);
void deleteEmployee(int *);
void displayEmployee(employee_t *, int);
void saveEmployee(char *, employee_t *, int);
void readEmployee(char *, employee_t *, int *);

/*******************************************************************************
 * Main
*******************************************************************************/
int main(void){

    printMenu();
    char dbFileName[] = "database";
    employee_t list[MAX_COMPANY_SIZE];
    int number_of_employee = 0;
    int choice = 0;

    while(choice != 6){
        printf("Enter your choice>");
        scanf("%d",&choice);
        
        switch(choice){
 
            case 1:
                addEmployee(list, &number_of_employee);
                break;            case 2:
                deleteEmployee(&number_of_employee);
                break;
                

            case 3:
                displayEmployee(list, number_of_employee);
                break;

            case 4:
                saveEmployee(dbFileName, list, number_of_employee);
                break;

            case 5:
                readEmployee(dbFileName, list, &number_of_employee);
                break;

            
            case 6:
                exit(0);
                break;
            default:
                printf("Invalid choice.\n");
            
        }
        printMenu();
    }
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

/*******************************************************************************
 * This function adds a new employee to the employeelist
*******************************************************************************/
void addEmployee(employee_t *list, int *number_of_employee){
    if(*number_of_employee == MAX_COMPANY_SIZE){
        printf("Maximum number of employees reached.\n");
    }else{
        printf("Enter name>");
        scanf("%s", list[*number_of_employee].name);
        printf("Enter birthday: day>");
        scanf(" %02d", &list[*number_of_employee].birthday.day);  
        if (number >30 || numbaler < 0) {
            printf("Invalid day.\n");
        }     
        printf("Enter birthday: month>");
        scanf("%02d", &list[*number_of_employee].birthday.month);
        if (number > 12 || number <= 0) {
            printf("Invalid month.\n");
        }
        printf("Enter birthday: year>");
        scanf("%u", &list[*number_of_employee].birthday.year);
        if (number > 2017  || number < 1800) {
            printf("Invalid year.\n");
        }
        printf("Enter FTE>");
        scanf("%f", &list[*number_of_employee].fte);
        if (number > 1 || number < 0) {
            printf("Invalid FTE.\n");
        }
        (*number_of_employee)++;
    }


    if(*number_of_employee == MAX_COMPANY_SIZE){
        printf("Maximum number of employees reached.\n");
    }else{
         printf("Enter name>");
        scanf("%s", list[*number_of_employee].name);
        printf("Enter birthday: day>");
        scanf("%u", &list[*number_of_employee].birthday.day);
        printf("Enter birthday: month>");
        scanf("%u", &list[*number_of_employee].birthday.month);
        printf("Enter birthday: year>");
        scanf("%d", &list[*number_of_employee].birthday.year);
        printf("Enter FTE>");
        scanf(" %f", &list[*number_of_employee].fte);
        (*number_of_employee)++;
    }
}

/*******************************************************************************
 * This function removes the last employee from the employeelist
*******************************************************************************/
void deleteEmployee(int *number_of_employee){
    if(*number_of_employee == 0){
        printf("The employee list is empty\n");
    }else{
        (*number_of_employee)--;
        printf("Last employee is deleted\n");
    }
}

/*******************************************************************************
 * This function display the list of employees
*******************************************************************************/
void displayEmployee(employee_t *list, int number_of_employee){
    int i;
    printf("Name       Birthday   FTE\n");
    printf("---------- ---------- ------\n");
    if (number_of_employee != 0) {
        for(i = 0 ; i < number_of_employee ; i++){
            printf("%-10s %02u-%02u-%4u %6.4f\n", list[i].name, 
                list[i].birthday.day, list[i].birthday.month, 
                list[i].birthday.year, list[i].fte);
        }
    }
}

/*******************************************************************************
 * This function save the employeelist in the hard disk as a text file named database
*******************************************************************************/
void saveEmployee(char *dbFileName, employee_t *list, int number_of_employee){
    FILE *file_pointer;
    int i;
    file_pointer = fopen(dbFileName, "w");
    if(file_pointer == NULL){
        printf("File with name database can't open.\n");
    }else{
        fprintf(file_pointer, "%d\n", number_of_employee);
        for(i = 0 ; i < number_of_employee ; i++){
            fprintf(file_pointer, "%-10s %2u %2u %4u %6.4f\n", list[i].name, 
                list[i].birthday.day, list[i].birthday.month, 
                list[i].birthday.year, list[i].fte);
        }
        fclose(file_pointer);
        // printf("Save the employeelist in the hard disk as a text file named database\n");
    }
}



/*******************************************************************************
 * This function read the database file and put the data into employeelist
*******************************************************************************/
void readEmployee(char *dbFileName, employee_t *list, int *number_of_employee){
    FILE *file_pointer;
    int i;
    file_pointer = fopen(dbFileName, "r");
    if(file_pointer == NULL){
        printf("Read error\n");
    }else{
        fscanf(file_pointer, "%d\n", number_of_employee);
        for(i = 0 ; i < *number_of_employee ; i++){
            fscanf(file_pointer, "%s%u%u%u%f\n", list[i].name, 
                &list[i].birthday.day, &list[i].birthday.month, 
                &list[i].birthday.year, &list[i].fte);
        }
        fclose(file_pointer);
    }
}