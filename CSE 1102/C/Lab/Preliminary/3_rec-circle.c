// The length and height of a rectangle and radius of a circle are input through the
// keyboard. Write a program to find the area & perimeter of the rectangle and the area
// & circumference of the circle.

#include <stdio.h>
#include <math.h>

int main() {
    float length, height, radius;
    float area, perimeter, circumference;
    float pi = 3.1416;

    // rectangle
    printf("Enter height and length of the rectangle: ");
    scanf("%f %f", &length, &height);
    area = length * height;
    perimeter = 2 * (length + height);
    printf("The area of the rectangle is %f and the perimeter is %f\n", area, perimeter);

    // circle
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    area = pi * pow(radius, 2);
    circumference = 2 * pi * radius;
    printf("The area of the circle is %f and the perimeter is %f\n", area, circumference);

    return 0;
}