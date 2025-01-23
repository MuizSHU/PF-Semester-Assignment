#include <stdio.h>

void sortDescending(int arr[], int n) {
    int i, j, temp;

    // Sorting the array in descending order using Bubble Sort
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                // Swap elements to arrange in descending order
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n, i, newValue;

    // Input the number of elements in the array
    printf("Input the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n + 1];  // Declare an array with one extra space for the new value

    // Input the elements of the array
    printf("Input %d elements in the array:\n", n);
    for (i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    // Input the new value to be inserted
    printf("Input the new value to insert into the array: ");
    scanf("%d", &newValue);

    // Insert the new value into the array at the last position
    arr[n] = newValue;

    // Sort the array in descending order
    sortDescending(arr, n + 1);

    // Print the array after sorting
    printf("The array after inserting the new value and sorting in descending order is:\n");
    for (i = 0; i < n + 1; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
