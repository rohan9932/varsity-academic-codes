#include <stdio.h>

int gcd_of_two(int a, int b) {
    int smallest = (a < b) ? a : b;
    for( ; smallest != 0; smallest--) {
        if(a % smallest == 0 && b % smallest == 0) {
            break;
        }
    }
    return smallest;
}

int lcm_of_two(int a, int b) {
    return (a*b) / gcd_of_two(a,b);
}

int main() {
    int a = 12, b = 24;
    int lcm = lcm_of_two(a,b);
    printf("The lcm of 2 numbers is: %d", lcm);
    return 0;
}