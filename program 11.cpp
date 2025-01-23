#include <stdio.h>

int main() {
    int matrix[3][3];
    int i, j;
    int min, max;

    // Input the elements of the 3x3 matrix
    printf("Enter the elements of a 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("element - [%d],[%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check if the matrix is an identity matrix
    int isIdentity = 1; // Assume it's an identity matrix
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if ((i == j && matrix[i][j] != 1) || (i != j && matrix[i][j] != 0)) {
                isIdentity = 0; // Not an identity matrix
                break;
            }
        }
        if (isIdentity == 0) {
            break;
        }
    }

    if (isIdentity) {
        printf("The matrix is an identity matrix.\n");
    } else {
        printf("The matrix is not an identity matrix.\n");
    }

    // Find the minimum and maximum numbers in the matrix
    min = matrix[0][0];
    max = matrix[0][0];

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (matrix[i][j] < min) {
                min = matrix[i][j]; // Update minimum value
            }
            if (matrix[i][j] > max) {
                max = matrix[i][j]; // Update maximum value
            }
        }
    }

    // Output the minimum and maximum values
    printf("The minimum number in the matrix is: %d\n", min);
    printf("The maximum number in the matrix is: %d\n", max);

    return 0;
}
