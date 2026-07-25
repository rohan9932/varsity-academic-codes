#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float num, angle, power, sq_rt, log_10, ln, sine, cosine, tangent; 
    printf("Enter a number: "); 
    scanf("%f", &num);

    printf("Enter an angle: ");
    scanf("%f", &angle);

    power = pow(num, 5);
    sq_rt = sqrt(num);
    log_10 = log10(num);
    ln = log(num);
    sine = sin(angle);
    cosine = cos(angle);
    tangent = tan(angle); 
    
    printf("The mathmatical op values are: power=%f sqrt=%f log=%f ln=%f\n", power, sq_rt, log_10, ln);
    printf("The trigonometric values are: sin=%f cos=%f tan=%f", sine, cosine, tangent); //radian angle

    return 0;
}