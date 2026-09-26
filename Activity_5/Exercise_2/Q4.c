#include <stdio.h>
int main() {
    int m, n;
    printf("Enter number of rows (m): ");
    scanf("%d", &m);
    printf("Enter number of columns (n): ");
    scanf("%d", &n);

    int a[m][n];
    printf("Enter the elements of the %dx%d matrix:\n", m, n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    int b[m + 1][n + 1];
    b[m][n] = 0;
    for (int i = 0; i < m; i++) {
        int row_sum = 0;
        for (int j = 0; j < n; j++) {
            b[i][j] = a[i][j];
            row_sum += a[i][j];
        }
        b[i][n] = row_sum;
    }
    for (int j = 0; j < n; j++) {
        int col_sum = 0;
        for (int i = 0; i < m; i++) {
            col_sum += a[i][j];
        }
        b[m][j] = col_sum;
        b[m][n] += col_sum;
    }
    printf("\nThe resulting %dx%d matrix is:\n", m + 1, n + 1);
    for (int i = 0; i <= m; i++) {
        for (int j = 0; j <= n; j++) {
            printf("%4d", b[i][j]);
        }
        printf("\n");
    }

    return 0;
}