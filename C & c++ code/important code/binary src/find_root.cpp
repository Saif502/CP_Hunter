#include <iostream>
#include <cmath>

using namespace std;

// Function to find the root of
double func(double x) {
    return x*x*x-2*x*x-4;
}

// Bisection method to find the root
double bisection(double a, double b, double tol) {
    double c = a;
    while ((b - a) >= tol) {
        // Find midpoint
        c = (a + b) / 2;

        // Check if midpoint is root
        if (func(c) == 0.0)
            break;

        // Decide the side to repeat the steps
        if (func(c) * func(a) < 0)
            b = c;
        else
            a = c;
    }
    return c;
}

int main() {
    double a = 1, b = 4; // Interval
    double tolerance = 0.005; // Tolerance for convergence

    double root = bisection(a, b, tolerance);

    cout << "Approximate root: " << root << endl;
    cout << "f(root): " << func(root) << endl;

    return 0;
}
