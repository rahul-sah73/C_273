#include <stdio.h>
int isSymmetric(int n, int mat[n][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (mat[i][j] != mat[j][i]) {
                return 0; 
            }
        }
    }
    return 1; 
}
void displayTrace(int n, int mat[n][n]) {
    int trace = 0;
    for (int i = 0; i < n; i++) {
        trace += mat[i][i];
    }
    printf("Trace of the matrix (sum of diagonal elements) = %d\n", trace);
}
int isUpperTriangular(int n, int mat[n][n]) {
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (mat[i][j] != 0) {
                return 0; 
            }
        }
    }
    return 1; 
}
int isLowerTriangular(int n, int mat[n][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (mat[i][j] != 0) {
                return 0; 
            }
        }
    }
    return 1; 
}
int isIdentity(int n, int mat[n][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j && mat[i][j] != 1) {
                return 0;
            }
            if (i != j && mat[i][j] != 0) {
                return 0;
            }
        }
    }
    return 1;
}
int main() {
    int n;
    printf("Enter the order of the square matrix (n): ");
    scanf("%d", &n);
    int mat[n][n];
    printf("Enter the elements of the %dx%d matrix:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    int choice;
    do {
        printf("\n--- MATRIX OPERATIONS MENU ---\n");
        printf("1. Check if matrix is symmetric\n");
        printf("2. Display trace of the matrix[cite: 3]\n");
        printf("3. Check if matrix is upper triangular[cite: 3]\n");
        printf("4. Check if matrix is lower triangular[cite: 3]\n");
        printf("5. Check if matrix is an identity matrix[cite: 3]\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                if (isSymmetric(n, mat))
                    printf("The matrix is symmetric.\n");
                else
                    printf("The matrix is NOT symmetric.\n");
                break;
            case 2:
                displayTrace(n, mat);
                break;
            case 3:
                if (isUpperTriangular(n, mat))
                    printf("The matrix is an upper triangular matrix.\n");
                else
                    printf("The matrix is NOT an upper triangular matrix.\n");
                break;
            case 4:
                if (isLowerTriangular(n, mat))
                    printf("The matrix is a lower triangular matrix.\n");
                else
                    printf("The matrix is NOT a lower triangular matrix.\n");
                break;
            case 5:
                if (isIdentity(n, mat))
                    printf("The matrix is an identity matrix.\n");
                else
                    printf("The matrix is NOT an identity matrix.\n");
                break;
            case 6:
                printf("Exiting program...\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 6);

    return 0;
}