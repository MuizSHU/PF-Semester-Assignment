#include <stdio.h>

void mergeArrays(int arr1[], int arr2[], int n, int merged[]) {
    int i, j;

    // Merging two arrays into one
    for (i = 0; i < n; i++) {
        merged[i] = arr1[i];
        merged[i + n] = arr2[i];
    }

    // Sorting the merged array in descending order using Bubble Sort
    for (i = 0; i < 2 * n - 1; i++) {
        for (j = 0; j < 2 * n - i - 1; j++) {
            if (merged[j] < merged[j + 1]) {
                // Swap the elements
                int temp = merged[j];
                merged[j] = merged[j + 1];
                merged[j + 1] = temp;
            }
        }
    }
}

int countDuplicates(int arr[], int n) {
    int count = 0;
    int freq[n];  // Frequency array to keep track of already counted elements
    int i, j;

    // Initialize the frequency array to 0
    for (i = 0; i < n; i++) {
        freq[i] = 0;
    }

    // Count duplicates
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j] && freq[i] == 0) {
                freq[i] = 1;  // Mark element as counted
                count++;      // Increment the duplicate count
                break;
            }
        }
    }
    return count;
}

int main() {
    int n, i;

    // Input the number of elements for both arrays
    printf("Input the number of elements to be stored in the first array: ");
    scanf("%d", &n);

    int arr1[n], arr2[n], merged[2 * n];

    // Input elements for the first array
    printf("Input %d elements in the first array:\n", n);
    for (i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr1[i]);
    }

    // Input elements for the second array
    printf("Input %d elements in the second array:\n", n);
    for (i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr2[i]);
    }

    // Merge the arrays and sort in descending order
    mergeArrays(arr1, arr2, n, merged);

    // Print the merged array in descending order
    printf("The merged array in descending order is:\n");
    for (i = 0; i < 2 * n; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    // Count duplicates in the merged array
    int duplicateCount = countDuplicates(merged, 2 * n);
    
    // Output the count of duplicate elements
    printf("Total number of duplicate elements found in the array is: %d\n", duplicateCount);

    return 0;
}
