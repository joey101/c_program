#include <stdio.h>
#define TEST_ARRAY_SIZE 100

// Return the number of "small" values in a square 2D array
// with sides of length side_length.
// A "small" value is greater than -10 and less than +10.
int count_small(int array[TEST_ARRAY_SIZE][TEST_ARRAY_SIZE], int side_length) {
    // PUT YOUR CODE HERE (you must change the next line!)
    int counter = 0;
    for (int row = 0; row < side_length; row++) {
        for (int col = 0; col < side_length; col++) {
            if (array[row][col] <= 9 && array[row][col] >= -9) {
                counter++;
            
            }
           
        }
    
    
    }
        
    
    
    return counter;
}

// This is a simple main function which could be used
// to test your count_small function.
// It will not be marked.

int main(void) {
    int test_array[TEST_ARRAY_SIZE][TEST_ARRAY_SIZE] = {
        { 1,    2,   3,    4  },
        {-1,  -11, -111, -111},
        { 0,   0,   0,    0  },
        { 22, -22,  2,    2  }
    };

    int result;

    result = count_small(test_array, 1);
    printf("Small values in 1x1 array: %d\n", result);

    result = count_small(test_array, 2);
    printf("Small values in 2x2 array: %d\n", result);

    result = count_small(test_array, 3);
    printf("Small values in 3x3 array: %d\n", result);

    result = count_small(test_array, 4);
    printf("Small values in 4x4 array: %d\n", result);

    return 0;
}
