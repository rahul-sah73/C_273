// 2.Write a program to add and multiply two matrices. Write separate
// functions to accept, display, add and multiply the matrices. 
// Perform necessary checks before adding and multiplying the matrices.

#include <stdio.h>
void inputMatrix(int matrix[][10], int m, int n) {
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void displayMatrix(int matrix[][10], int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void addMatrices(int a[][10], int b[][10], int result[][10], int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            result[i][j] = a[i][j] + b[i][j];
        }
    }
}

void multiplyMatrices(int a[][10], int b[][10], int result[][10], int m1, int n1, int m2, int n2) {
    for (int i = 0; i < m1; i++) {
        for (int j = 0; j < n2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < n1; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

int main() {
    int m1, n1, m2, n2;
    printf("Enter the number of rows and columns for the first matrix (m1 n1): ");
    scanf("%d %d", &m1, &n1);
    printf("Enter the number of rows and columns for the second matrix (m2 n2): ");
    scanf("%d %d", &m2, &n2);

    if (m1 <= 0 || n1 <= 0 || m2 <= 0 || n2 <= 0 || m1 > 10 || n1 > 10 || m2 > 10 || n2 > 10) {
        printf("Invalid matrix dimensions. Please enter positive integers less than or equal to 10.\n");
        return 1;
    }

    int A[10][10], B[10][10], sum[10][10], product[10][10];

    inputMatrix(A, m1, n1);
    inputMatrix(B, m2, n2);

    // Check if matrices can be added
    if (m1 == m2 && n1 == n2) {
        addMatrices(A, B, sum, m1, n1);
        printf("Sum of the matrices:\n");
        displayMatrix(sum, m1, n1);
    } else {
        printf("Matrices cannot be added due to incompatible dimensions.\n");
    }

    // Check if matrices can be multiplied
    if (n1 == m2) {
        multiplyMatrices(A, B, product, m1, n1, m2, n2);
        printf("Product of the matrices:\n");
        displayMatrix(product, m1, n2);
    } else {
        printf("Matrices cannot be multiplied due to incompatible dimensions.\n");
    }

    return 0;
}