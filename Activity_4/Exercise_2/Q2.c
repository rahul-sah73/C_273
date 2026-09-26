// 2.Write a function, which accepts a character and integer n as parameter and
// displays the next n characters.

#include <stdio.h>
void displayNextNCharacters(char c, int n) {
    for (int i = 1; i <= n; i++) {
        printf("%c ", c + i);
    }
    printf("\n");
}

int main() {
    char ch;
    int n;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    printf("Enter the number of characters to display: ");
    scanf("%d", &n);
    displayNextNCharacters(ch, n);
    return 0;
}