#include <stdio.h>
#include <math.h>

int main () {
    int lowest, highest, sides, dice;
    float avg;
    printf("Enter the number of sides on your dice: ");
    scanf("%d", &sides);

    printf("Enter the number of dice being rolled: ");
    scanf("%d", &dice);

    if (dice <= 0 || sides <= 0 ){

        printf("These dice will not produce a range.");
        return 0;
    }

    lowest = dice;
    highest = dice * sides;
    avg = (highest + lowest) / 2.0;

    printf("Your dice range is %d to %d\n", lowest, highest);
    printf("The average value is %.2f", avg);


    return 0;

}