// Write a program to accept an integer n and display all even numbers upto n.

#include <stdio.h>
int main() {
    int n, i;
    printf("Enter an integer n: ");
    scanf("%d", &n);

    printf("Even numbers up to %d are:\n", n);
    
    for(i = 1; i <= n; i++) {
        if(i % 2 == 0) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}