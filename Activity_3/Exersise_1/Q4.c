// Write a program to accept a character, an integer n and display the next n characters.

#include<stdio.h>
int main() {
    char ch;
    int n, i;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    printf("Enter an integer n: ");
    scanf("%d", &n);
    printf("The next %d characters after %c are: ", n, ch);
    for(i = 1; i <= n; i++) {
        printf("%c ", ch + i);
    }
    printf("\n");
    return 0;
}