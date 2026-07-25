// code to convert input to km to mile or vice versa 

#include <stdio.h>
int main() {
    float opt, x, ans;
    printf("Enter 1 for km to mile and 2 for mile to km: ");
    scanf("%f", &opt);
    if(opt == 1) 
    {
        printf("Enter km: ");
        scanf("%f", &x);
        ans = x * 0.621;
        printf("It is %f miles.", ans);
    } 
    else if (opt == 2)
    {
        printf("Enter mile: ");
        scanf("%f", &x);
        ans = x * 1.609;
        printf("It is %f kilometers.", ans);
    }
    else
    {
        printf("Invalid Input.");
    }
    return 0;
}