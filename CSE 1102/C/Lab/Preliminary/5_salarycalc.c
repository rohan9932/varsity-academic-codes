#include <stdio.h>

int main() {
    int base_salary;
    float rent_alwnce, med_alwnce, tech_alwnce = 1000, gross_salary;

    printf("Enter your base salary Rahim: ");
    scanf("%d", &base_salary);

    rent_alwnce = base_salary * (30.0/100); // need to convert a value to float to make the division output in decimal form
    med_alwnce = base_salary * (5.0/100);
    gross_salary = base_salary + rent_alwnce + med_alwnce + tech_alwnce;

    printf("Rahim's gross salary is: %f", gross_salary);

    return 0;
}