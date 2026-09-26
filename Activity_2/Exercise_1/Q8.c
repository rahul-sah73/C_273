// Write a program to check whether given character is a digit or a character in lowercase 
// or uppercase alphabet.(Hint ASCII value of digit is between 48 to 58 and Lowercase characters have 
// ASCII values in the range of 97 to122, uppercase is between 65 and 90)

#include <stdio.h>
int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= 48 && ch <= 57) {
        printf("The character '%c' is a digit.\n", ch);
    } else if (ch >= 97 && ch <= 122) {
        printf("The character '%c' is a lowercase alphabet.\n", ch);
    } else if (ch >= 65 && ch <= 90) {
        printf("The character '%c' is an uppercase alphabet.\n", ch);
    } else {
        printf("The character '%c' is neither a digit nor an alphabet.\n", ch);
    }

    return 0;
}