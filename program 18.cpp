#include <iostream>
#include <cmath>
using namespace std;

// 1. Solve (First): Passes an integer and prints its multiplication table.
void Solve(int num) {
    cout << "Multiplication Table of " << num << ":\n";
    for (int i = 1; i <= 10; i++) {
        cout << num << " * " << i << " = " << num * i << endl;
    }
}

// 2. Solve (Second): Passes three float values and calculates the sum of their squares.
void Solve(float a, float b, float c) {
    float sum_of_squares = (a * a) + (b * b) + (c * c);
    cout << "Sum of squares of the values: " << sum_of_squares << endl;
}

// 3. Solve (Third): Passes four integer values and returns the average as a float.
float Solve(int a, int b, int c, int d) {
    float average = (a + b + c + d) / 4.0;
    return average;
}

// 4. Solve (Template): Function template that works with both integer and float types.
template <typename T>
void Solve(T a, T b, T c) {
    if constexpr (std::is_integral<T>::value) {
        // For integers, compute the sum of their squares
        T sum_of_squares = (a * a) + (b * b) + (c * c);
        cout << "Sum of squares of integers: " << sum_of_squares << endl;
    } else if constexpr (std::is_floating_point<T>::value) {
        // For floats, compute the sum of their squares
        T sum_of_squares = (a * a) + (b * b) + (c * c);
        cout << "Sum of squares of floats: " << sum_of_squares << endl;
    }
}

int main() {
    // Calling the first Solve function (int argument)
    int num = 5;
    Solve(num); // This will print the multiplication table of num

    // Calling the second Solve function (three float values)
    float a = 2.5, b = 3.5, c = 4.5;
    Solve(a, b, c); // This will calculate the sum of squares of a, b, and c

    // Calling the third Solve function (four integers) and printing the average
    int p = 10, q = 20, r = 30, s = 40;
    float average = Solve(p, q, r, s); // This will return the average of p, q, r, and s
    cout << "The average of the four integers is: " << average << endl;

    // Calling the fourth Solve function using template (integer values)
    int x1 = 1, x2 = 2, x3 = 3;
    Solve(x1, x2, x3); // This will calculate the sum of squares of integers

    // Calling the fourth Solve function using template (float values)
    float f1 = 1.1f, f2 = 2.2f, f3 = 3.3f;
    Solve(f1, f2, f3); // This will calculate the sum of squares of floats

    return 0;
}
