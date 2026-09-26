// Write a program to accept characters till the user enters EOF and count number
// of alphabets and digits entered. Refer to sample program 5 given above.

#include <stdio.h>

int main() {
    char ch;
    int alphabet_count = 0, digit_count = 0;

    printf("Enter characters (press Ctrl+D to stop):\n");

    while ((ch = getchar()) != EOF) {
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            alphabet_count++;
        } else if (ch >= '0' && ch <= '9') {
            digit_count++;
        }
    }

    printf("Number of alphabets entered: %d\n", alphabet_count);
    printf("Number of digits entered: %d\n", digit_count);

    return 0;
}
