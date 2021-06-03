//z5320158 jawad z5320158
//01/07/2020


#include <stdio.h>
#include <math.h>


int main(void){
    int boxes;
    printf("How many boxes: ");
    scanf("%d", &boxes);


    int boxSide = boxes *3 + (boxes - 1);
    int i;
    int j;

    for (i = 0, j = 0; i < boxes; i++, j += 2) { 

        int row = 1;   

            while (row <= boxSide) {

                int column = 1;

                while (column <= boxSide) {

                    if ( (row == (j+1) && column >= (j+1) && column <= boxSide - (j+1)) ||
                    
                         (row == boxSide - j && column >= (j+1) && column <= boxSide - (j+1)) ||
                         
                         (column == (j+1) && row >= (j+1) && row <= boxSide - (j+1)) ||
                         
                         (column == boxSide - j && row >= (j+1) && row <= boxSide - j) ) {

                    printf("1");

                    }

                    else {
                        printf("0");
                    }

                column++;

                }

                row++;
                printf("\n");

            }

    }
    return 0;
}





