#include <stdio.h>

int main() {
    float dist_km, m, ft, inch, cm;
    printf("Enter a distance (in km): ");
    scanf("%f", &dist_km);

    m = dist_km * 1000;
    ft = dist_km * 3280.84;
    inch = dist_km * 39370.1;
    cm = m * 100;

    printf("Meter=%f Feet=%f Inch=%f Centimeter=%f", m, ft, inch, cm);
    
    return 0;
}