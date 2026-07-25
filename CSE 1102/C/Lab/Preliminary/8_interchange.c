// interchange valueus without taking a third variable
#include <stdio.h>

int main() {
    int a,b; // test case a = 5, b = 7  
    printf("Enter first num: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    b += a; // b = 12 
    a += b; // a = 17 
    b = a - b; // b = 5 
    a = a - (2*b); // a = 7 

    printf("Now the first number is %d and second number is %d", a, b);

    return 0;
}