// Write a program to display the first n Fibonacci numbers. (1 1 2 3 5 ……)

#include <stdio.h>
int main() {
    int n, first = 1, second = 1, next;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (int i = 1; i <= n; ++i) {
        if(i == 1 || i == 2) {
            next = 1;
        } else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d ", next);
    }
    printf("\n");

    return 0;
}