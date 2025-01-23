#include <iostream>
#include <math.h>

int main() {
    int num, originalNum, remainder, sum = 0, digits = 0;

    // Input from the user
    printf("Enter a decimal number: ");
    scanf("%d", &num);

    originalNum = num;

    // Find the number of digits in the number
    while (originalNum != 0) {
        originalNum /= 10;
        digits++;
    }

    originalNum = num;

    // Calculate the sum of each digit raised to the power of the number of digits
    while (originalNum != 0) {
        remainder = originalNum % 10;  // Extract the last digit
        sum += pow(remainder, digits); // Add the power of the digit to sum
        originalNum /= 10;             // Remove the last digit
    }

    // Check if the sum is equal to the original number
    if (sum == num) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}
