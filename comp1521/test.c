#include <stdio.h>

int main () {
    int length = 100;
    char input[length];
    int i = 0;
    while (scanf("%[^\n]s", &input) == 1) {


        
        printf("%s", input);
        
        scanf("%[^\n]s", &input);
        
    }

    return 0;
}

