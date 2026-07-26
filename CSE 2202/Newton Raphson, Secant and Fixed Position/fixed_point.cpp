#include <bits/stdc++.h>
using namespace std;

// Demo equation:  f(x) = x^3 - x - 1 = 0        (root ~ 1.324718)
// Rearranged into x = g(x):  x = (x + 1)^(1/3)
// NOTE: not every rearrangement of an equation converges - only use a g(x)
// where |g'(x)| < 1 near the root, or the iteration will drift away/blow up.
vector<double> coeff = {-1, -1, 0, 1};  // a0, a1, a2, a3  (for f(x), used only to verify with Horner)
int n = 3;                              // degree of f(x)

// Evaluate f(x) using Horner's method (just to display/verify, not used in the iteration itself)
double horner(double x, vector<double>& coeff, int n) {
    double result = coeff[n];
    for (int i = n - 1; i >= 0; i--)
        result = result * x + coeff[i];
    return result;
}

// The rearranged function x = g(x)
double g(double x) {
    return cbrt(x + 1);   // cube root, handles this rearrangement safely
}

int main() {
    double x0 = 1.5;   // initial guess (pick something reasonably close to the root)

    printf("Initial Guess: %.2f\n\n", x0);
    printf("%6s|%10s|%10s|%10s|%4s|%10s|\n",
           "No", "x0", "x1", "f(x0)", "Sign", "Abs Err");

    double x1, fx0, error;
    int itr = 1;

    while (true) {
        fx0 = horner(x0, coeff, n);
        x1  = g(x0);
        error = fabs(x1 - x0);

        printf("%6d|%10.7f|%10.7f|%10.7f|%4s|",
               itr, x0, x1, fx0, (fx0 >= 0 ? "+" : "-"));

        if (itr == 1) printf("%10s|\n", "N/A");
        else          printf("%10.7f|\n", error);

        x0 = x1;
        itr++;

        if (error < 0.000001) break;
    }

    printf("\nTotal Iterations: %d\n", itr - 1);
    printf("Approx. root is: %.6f\n", x1);
    return 0;
}