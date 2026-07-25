#include <stdio.h>

int main() {
    int num, sum = 0, digit;
    printf("Enter a 5 digit number: ");
    scanf("%d", &num);
    for (int i = 0; i < 5; i++)
    {
        digit = num % 10;
        sum += digit;
        num = num / 10;
    }
    printf("The sum is: %d\n", sum);
    return 0;
}