#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr[] = {38, 44, 63, -51, -35, 19, 84, -69, 4, -46};
    int n = sizeof(arr) / sizeof(arr[0]);
    int minSum = 2147483647; // Initialize to a large value
    int pair[2]; // To store the pair whose sum is closest to zero
    int i, j;

    // Print the given array
    printf("The given array is: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Compare all pairs to find the one whose sum is closest to zero
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            int sum = arr[i] + arr[j];

            // If the sum is closer to zero, update the minimum sum and store the pair
            if (abs(sum) < abs(minSum)) {
                minSum = sum;
                pair[0] = arr[i];
                pair[1] = arr[j];
            }
        }
    }

    // Print the pair whose sum is closest to zero
    printf("The Pair of elements whose sum is minimum are:\n[%d, %d]\n", pair[0], pair[1]);

    return 0;
}
