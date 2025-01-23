#include <iostream>


#define SIZE 10 // Defining the size of the array globally

// Global array declaration with 10 integer values
int arr[SIZE] = {12, 13, 17, 24, 5, 8, 19, 21, 37, 44};

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) {
        return false; // Numbers less than or equal to 1 are not prime
    }
    for (int i = 2; i * i <= num; i++) { // Loop from 2 to sqrt(num)
        if (num % i == 0) {
            return false; // If divisible by any number other than 1 and itself
        }
    }
    return true;
}

// User-defined function to sum the prime numbers in the array
int sumOfPrimes() {
    int sum = 0;
    for (int i = 0; i < SIZE; i++) {
        if (isPrime(arr[i])) {  // If the number is prime
            sum += arr[i];      // Add it to the sum
        }
    }
    return sum;  // Return the sum of prime numbers
}

int main() {
    int result = sumOfPrimes();  // Call the function to get the sum of primes
    printf("The sum of prime numbers in the array is: %d\n", result);
    return 0;
}
