#include <stdio.h>

// User Defined Function to print the multiplication table of each number
void table(int arr[5]) {
    // Loop through the array and print the multiplication table for each number
    for (int i = 0; i < 5; i++) {
        printf("\nMultiplication Table of %d:\n", arr[i]);
        for (int j = 1; j <= 10; j++) {
            printf("%d * %d = %d\n", arr[i], j, arr[i] * j);
        }
    }
}

int main() {
    int numbers[5];

    // Input: Taking 5 integer values from the user
    printf("Enter 5 integers to print their multiplication tables:\n");
    for (int i = 0; i < 5; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Call the table function to print the multiplication tables
    table(numbers);

    return 0;
}
