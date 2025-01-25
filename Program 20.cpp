#include <iostream>
#include <cmath>
using namespace std;

// UDF-2: Function to calculate the square root of a number
double squareroot(double x) {
    return sqrt(x);
}

// UDF-3: Function to calculate the product of three numbers
double product(double a, double b, double c) {
    return a * b * c;
}

// UDF-1: Main function that handles the input and calls other UDFs
void sum_of_square(double a, double b, double c) {
    // 1. Send a, b, and c to UDF-2 for calculating square roots
    double sqrt_a = squareroot(a);
    double sqrt_b = squareroot(b);
    double sqrt_c = squareroot(c);

    // 2. Now call UDF-3 to calculate the product of the square roots
    double result = product(sqrt_a, sqrt_b, sqrt_c);

    // 3. Print the result
    cout << "The product of the square roots of " << a << ", " << b << ", and " << c << " is: " << result << endl;
}

int main() {
    double a, b, c;

    // Taking input from the user
    cout << "Enter three numbers (a, b, c): ";
    cin >> a >> b >> c;

    // Call UDF-1 with the entered values
    sum_of_square(a, b, c);

    return 0;
}
