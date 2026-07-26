#include <bits/stdc++.h>
using namespace std;

// f(n) = (2n^4 - 9n^3 + 7n^2 - 5n + 6) / 4
// dividing every original coefficient by 4 gives this coeff array:
vector<double> coeff = {1.5, -1.25, 1.75, -2.25, 0.5};  // a0, a1, a2, a3, a4
int n = 4;                                              // degree

// Evaluate f(x) using Horner's method
double horner(double x, vector<double>& coeff, int n) {
    double result = coeff[n];
    for (int i = n - 1; i >= 0; i--)
        result = result * x + coeff[i];
    return result;
}

int main() {
    // Initial estimation: n0 = -(a_{n-1} / (2*a_n))
    double n0 = -(coeff[n - 1] / (2 * coeff[n]));
    double n1 = n0 + 0.5;   // second guess, as required by the question

    printf("Initial Guess: %.2f\n\n", n0);
    printf("%6s|%10s|%10s|%10s|%10s|%10s|%10s|%4s|%10s|\n",
           "No", "n0", "n1", "f(n0)", "f(n1)", "n2", "f(n2)", "Sign", "Abs Err");

    double n2, f0, f1, f2, error;
    int itr = 1;

    while (true) {
        f0 = horner(n0, coeff, n);
        f1 = horner(n1, coeff, n);
        n2 = n1 - f1 * (n1 - n0) / (f1 - f0);
        f2 = horner(n2, coeff, n);
        error = fabs(n2 - n1);

        // print the row up to Sign first, then add Abs Err as the last cell
        printf("%6d|%10.7f|%10.7f|%10.7f|%10.7f|%10.7f|%10.7f|%4s|",
               itr, n0, n1, f0, f1, n2, f2, (f2 >= 0 ? "+" : "-"));

        if (itr == 1) printf("%10s|\n", "N/A");
        else          printf("%10.7f|\n", error);

        n0 = n1;
        n1 = n2;
        itr++;

        if (error < 0.000001) break;
    }

    printf("\nTotal Iterations: %d\n", itr - 1);
    printf("Approx. root is: %.6f\n", n2);
    return 0;
}