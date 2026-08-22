#include <bits/stdc++.h>
using namespace std;

// Evaluate polynomial using Horner's Method
double horner(double x, vector<double>& poly) {
    int degree = poly.size() - 1;
    double result = poly[degree];
    for (int i = degree - 1; i >= 0; i--) {
        result = result * x + poly[i];
    }
    return result;
}

// Compute derivative coefficients: d/dx (a0 + a1*x + a2*x^2 + ...)
vector<double> getDerivative(vector<double>& poly) {
    int degree = poly.size() - 1;
    vector<double> der(degree);
    for (int i = 1; i <= degree; i++) {
        der[i - 1] = poly[i] * i;
    }
    return der;
}

// Synthetic division: divide poly by (x - root) to reduce its degree
vector<double> deflate(vector<double>& poly, double root) {
    int degree = poly.size() - 1;
    vector<double> deflated(degree);
    deflated[degree - 1] = poly[degree];
    for (int i = degree - 2; i >= 0; i--) {
        deflated[i] = poly[i + 1] + deflated[i + 1] * root;
    }
    return deflated;
}

int main() {
    vector<double> poly = {-6, 11, -3, -3, 1};

    double bracket_val = sqrt(pow((-3/1), 2) - 2*(-3/1));

    printf("Search Bracket: [-%f, %f]\n\n", bracket_val, bracket_val);
    printf("For Newton Raphson,\n");


    for (int root_no = 1; root_no <= 4; root_no++) {
        printf("Converging to Root (root no %d):\n", root_no);
        printf("%6s %10s %12s %12s %10s %10s\n", 
               "Iter", "x0", "f(x0)", "f_der(x0)", "x1", "Error");

        vector<double> der_poly = getDerivative(poly);
        double x0 = 0;
        double x1, fx0, dfx0, error;
        int itr = 0;

        while (true) {
            fx0  = horner(x0, poly);
            dfx0 = horner(x0, der_poly);

            // Avoid division by zero
            if (fabs(dfx0) < 1e-9) dfx0 = 1e-9;

            x1 = x0 - (fx0 / dfx0);
            error = fabs(x1 - x0);

            printf("%6d %10.6f %12.6f %12.6f %10.6f ", 
                   itr, x0, fx0, dfx0, x1);

            if (itr == 0) printf("%10s\n", "N/A");
            else          printf("%10.6f\n", error);

            if (error < 0.000001 || itr >= 100) break;

            x0 = x1;
            itr++;
        }

        // Clean up small floating point rounding issues (e.g., 2.999999 -> 3)
        double root_val = round(x1);
        printf("Value of Root = %.0f\n\n", root_val);

        // Deflate polynomial to find subsequent roots
        if (root_no < 4) {
            poly = deflate(poly, root_val);
        }
    }

    return 0;
}