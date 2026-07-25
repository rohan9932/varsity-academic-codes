#include <stdio.h>

int main() {
    int a,b,c,d,e;
    float aggr_num;
    printf("Enter marks of the 5 subjects: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    aggr_num = (a + b + c + d + e) / 5.0;
    printf("The aggregate number is: %f", aggr_num);
    return 0;
}