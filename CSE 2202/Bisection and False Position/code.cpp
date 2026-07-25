#include<bits/stdc++.h>
using namespace std;

double f(double x) {
    return sin(x) + exp(-x) - (x/5);
}

void bisection(double a, double b, double minError) {
    if (f(a) * f(b) >= 0) {
        cout << "Invalid Interval\n";
        return;
    }

    printf("%3s| %10s| %10s| %10s| %10s| %10s| %10s| %4s| %10s| %10s| %6s\n",
           "No", "a", "b", "f(a)", "f(b)", "x0", "f(x0)", "sign", "Rel Error", "Interval", "Update");
    cout << "-----------------------------------------------------------------------------------------------------------------\n";

    double old_x0 = a;
    int it = 1;

    while(true) {
        double aprint = a;
        double bprint = b;
        double fa = f(a);
        double fb = f(b);
        double x0 = (a+b)/2;
        double fx0 = f(x0);
        string update;
        string sign = fx0 > 0 ? "+": "-";

        double rel_error = fabs((x0-old_x0)/x0);
        double interval = fabs(b-a);

        if (rel_error <= minError) {
            break;
        }

        if(fa*fx0 < 0) {
            b = x0;
            update = "upper";
        } else {
            a = x0;
            update = "lower";
        }

        printf("%3d| %10.7f| %10.7f| %10.7f| %10.7f| %10.7f| %10.7f| %4s| %10.7f| %10.7f| %4s\n",
            it, aprint, bprint, fa, fb, x0, fx0, sign.c_str(), rel_error, interval, update.c_str());
        
        old_x0 = x0; // for next it
        it++;
    }
}

int main() {

    bisection(2, 7, 0.000001);

    return 0;
}