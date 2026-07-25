#include <stdio.h>

int main() {
    int num, digit, ans_num = 0, multiplier;
    printf("Enter a 5 digit number: ");
    scanf("%d", &num);
    for (int i = 0; i < 5; i++)
    { 
        multiplier = 10000 / 
        digit = num % 10;
        ans_num += digit * multiplier;
    }
    
}