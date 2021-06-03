// identity_matrix.c
// Given a 2D array (or matrix), find the 
// Corresponding identity matrix
#include <stdio.h>
#include <stdlib.h>


void make_identity(int size, int matrix[size][size]);
void print_matrix(int size, int matrix[size][size]);

// This is a simple main function that you can use to test your identity_matrix
// function.
// It will not be marked - only your array_sum_prod function will be marked.
//
// Note: the autotest does not call this main function!
// It calls your identity_matrix function directly.
// Any changes that you make to this main function will 
// not affect the autotests.
int main(void){

    int array3[3][3] = {{0, 1, 2}, {3, 4, 5}, {6, 7, 8}};

    make_identity(3, array3);

    print_matrix(3, array3);

    return 0;
}

//Makes a square matrix into an identity matrix
void make_identity(int size, int matrix[size][size]) {
    //TODO: Complete this function
    for (int row = 0; row < size; row++) {
        for (int column = 0; column < size; column++) {
            if (row == column) {
                matrix[row][column] = 1;
                //printf("%d ", matrix[row][column]);
            }
            else {
                matrix[row][column] = 0;
                //printf("%d ", matrix[row][column]);
            }
            
        }
        
    }
    
}

//Prints out a square matrix of any size
void print_matrix(int size, int matrix[size][size]) {
    int i = 0;
    while (i < size){
        int j = 0;
        while (j < size){
            printf("%d ", matrix[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }

}


