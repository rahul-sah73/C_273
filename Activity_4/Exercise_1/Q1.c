// Write a program, which accepts a character from the user and checks if it is an alphabet, 
// digit or punctuation symbol. If it is an alphabet, check if it is uppercase or lowercase
// and then change the case

#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if (isalpha(ch)) {
        if (isupper(ch)) {
            printf("The character is an uppercase letter.\n");
            printf("Changed case: %c\n", tolower(ch));
        } else {
            printf("The character is a lowercase letter.\n");
            printf("Changed case: %c\n", toupper(ch));
        }
    } else if (isdigit(ch)) {
        printf("The character is a digit.\n");
    } else {
        printf("The character is a punctuation symbol.\n");
    }

    return 0;
}