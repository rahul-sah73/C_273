// 1.Write a program to accept a matrix A of size m X n and store its transpose
// in matrix B. Display matrix B. Write separate functions.

#include <stdio.h>
void inputMatrix(int matrix[][10], int m, int n) {
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void transposeMatrix(int a[][10], int b[][10], int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            b[j][i] = a[i][j];
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

int main() {
    int m, n;
    printf("Enter the number of rows (m): ");
    scanf("%d", &m);
    printf("Enter the number of columns (n): ");
    scanf("%d", &n);

    int A[10][10], B[10][10];

    inputMatrix(A, m, n);
    transposeMatrix(A, B, m, n);

    printf("Transpose of the matrix:\n");
    displayMatrix(B, n, m);

    return 0;
}