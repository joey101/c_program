

#include <stdio.h>

#define LENGTH 256


int main() {

    
    int letter[LENGTH];
    int i = 0;
  
    letter[i] = getchar();
    i++;
    while((letter[i] = getchar()) != '\n') {
        i++;

        
    }
    
  
    int position;
    scanf("%d", &position);
    
    
    /*if (position == '\0') {
        printf("The character in position %d is '%c'\n", 
        position, letter[position - 1]);
            
    }
    else {*/
        printf("The character in position %d is '%c'\n", 
        position, letter[position]);
    //}  
}
