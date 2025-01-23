#include <stdio.h>

int main() {
    int n, i, sum = 0;

    // Input the number of elements to be stored in the array
    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n);

    int arr1[n], arr2[n];  // Declare two arrays

    // Input elements into the first array
    printf("Input %d elements in the array:\n", n);
    for (i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr1[i]);
    }

    // Copy elements from the first array to the second array
    for (i = 0; i < n; i++) {
        arr2[i] = arr1[i];
    }

    // Print the elements of the first array
    printf("The elements stored in the first array are:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");

    // Print the elements of the second array
    printf("The elements copied into the second array are:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    // Calculate the sum of even numbers
    for (i = 0; i < n; i++) {
        if (arr2[i] % 2 == 0) {  // Check if the number is even
            sum += arr2[i];
        }
    }

    // Print the sum of even numbers
    printf("Sum of even numbers = %d\n", sum);

    return 0;
}
