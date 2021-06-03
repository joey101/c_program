// copy all of the values in source1 which are also found in source2 into destination
// return the number of elements copied into destination
//z5320158
//By jawad tanana
// 02/07/2020
#include <stdio.h>
int common_elements(int length, int source1[length], int source2[length], int destination[length]) {
    // PUT YOUR CODE HERE (you must change the next line!)
    int i = 0;
    int matches = 0;
    while (i < length) {
        int j = 0; 
        while (j < length ) {
            
            if (source1[i] == source2[j]) {
                j = length;
                destination[matches] = source1[i];
                matches++;
            
            
            }
            j++;
        }
        i++;
       
    }
    return matches;
}

// You may optionally add a main function to test your common_elements function.
// It will not be marked.
// Only your common_elements function will be marked.

int main(void) {
    int source1[] ={1, 4, 1, 5, 9, 2};
    int source2[]= {1, 1, 8, 2, 5, 3};
    int destination[6];
    common_elements(6, source1, source2, destination);
    printf("%d", common_elements(6, source1, source2, destination));
    return 0;
}
