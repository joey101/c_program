// COMP1511 Week 5 Lab: Circle Facts
//
// This program was written by Jawad Tanana (z5320158)
// on 27-06-2020
//
// This program prints out facts about a circle given its radius,
// using functions.
//

#include <stdio.h>
#include <math.h>

#define M_PI 3.14159265358979323846

double area(double radius);
double circumference(double radius);
double diameter(double radius);

// DO NOT CHANGE THIS MAIN FUNCTION
int main(void) {
    double radius;

    printf("Enter circle radius: ");
    scanf("%lf", &radius);

    printf("Area          = %lf\n", area(radius));
    printf("Circumference = %lf\n", circumference(radius));
    printf("Diameter      = %lf\n", diameter(radius));

    return 0;
}

// Calculate the area of a circle, given its radius.
double area(double radius) {
    // TODO: complete this function.
    double r_a;
    r_a = M_PI * pow(radius, 2);
    return r_a; // TODO: change this to the correct return value.
}

// Calculate the circumference of a circle, given its radius.
double circumference(double radius) {
    // TODO: complete this function.
    double c_i;
    c_i = 2 * M_PI * radius;
    return c_i; // TODO: change this to the correct return value.
}

// Calculate the diameter of a circle, given its radius.
double diameter(double radius) {
    // TODO: complete this function.
    double d_i;
    d_i = 2 * radius;
    return d_i; // TODO: change this to the correct return value.
}
