#include <stdio.h>

int main() {
    float F, C;
    printf("Enter temperature in Farenheit: ");
    scanf("%f", &F);

    C = (5.0/9) * (F - 32);
    printf("The temperature in Centigrades is: %f", C);

    return 0;
}