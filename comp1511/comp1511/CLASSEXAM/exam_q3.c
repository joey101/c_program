#include <stdio.h>
#include <assert.h>

#define MAX_SIZE 1000


int main(void) {
    
    int col = 0;
    int array[MAX_SIZE] = {0};
    // scans numbers into the list until specified to stop.
    while (col != '\0' && col != EOF) {
        scanf("%d", &array[col]);
        col++;
    }
    
    int neg = 0;
    int plus = 0;
    //int disregard = 0;
    // first loop will check each number 
    for (int counter_col = 0; counter_col < col; counter_col++) {
    
        // second loop is checking the first loops number by each value
        for (int checker = counter_col; checker < col ; checker++) {
        
             // if the negative counter part exists it will increase the counter
             if (array[counter_col] == (array[checker] * -1)) {
             
                neg++;
              
             }
            
            
        }
     
        // counts in total how many numbers are in the list
        plus++;
    }    
    
    int total = plus - (neg);
    printf("%d\n", total);

    return 0;
}
