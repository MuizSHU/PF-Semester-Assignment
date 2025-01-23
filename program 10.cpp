#include <stdio.h>

int main() {
    int rows1, cols1, rows2, cols2;

    // Input dimensions for the first matrix
    printf("Input Rows and Columns of the 1st matrix: ");
    scanf("%d %d", &rows1, &cols1);

    // Input dimensions for the second matrix
    printf("Input Rows and Columns of the 2nd matrix: ");
    scanf("%d %d", &rows2, &cols2);

    // Check if both matrices have the same dimensions
    if (rows1 != rows2 || cols1 != cols2) {
        printf("The matrices cannot be compared as their dimensions are not the same.\n");
        return 0; // Exit if matrices cannot be compared
    }

    int matrix1[rows1][cols1], matrix2[rows2][cols2], sum[rows1][cols1];
    
    // Input elements for the first matrix
    printf("Input elements in the first matrix:\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            printf("element - [%d],[%d]: ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input elements for the second matrix
    printf("Input elements in the second matrix:\n");
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            printf("element - [%d],[%d]: ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Display the first matrix
    printf("The first matrix is:\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            printf("%d ", matrix1[i][j]);
        }
        printf("\n");
    }

    // Display the second matrix
    printf("The second matrix is:\n");
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            printf("%d ", matrix2[i][j]);
        }
        printf("\n");
    }

    // Check if the matrices are equal
    int areEqual = 1; // Assume matrices are equal initially
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            if (matrix1[i][j] != matrix2[i][j]) {
                areEqual = 0; // If any element is different, matrices are not equal
                break;
            }
        }
    }

    if (areEqual) {
        printf("The Matrices can be compared:\nTwo matrices are equal.\n");
    } else {
        printf("The Matrices can be compared:\nTwo matrices are not equal.\n");
    }

    // Perform the addition of the two matrices
    printf("The sum of the two matrices is:\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j]; // Add corresponding elements
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
