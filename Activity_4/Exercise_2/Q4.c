// 2.Write a function that accepts a character as parameter and returns 1 
// if it is an alphabet, 2 if it is a digit and 3 is it is a special symbol.
// In main, accept characters till the user enters EOF and use the function
//  to count the total number of alphabets, digits and special symbols entered.

#include <stdio.h>
int charType(char c) {
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
        return 1; // Alphabet
    } else if (c >= '0' && c <= '9') {
        return 2;
    } else {
        return 3; // Special symbol
    }
}

int main() {
    char c;
    int alphabets = 0, digits = 0, specialSymbols = 0;

    printf("Enter characters (Press Ctrl+D to end input):\n");
    while ((c = getchar()) != EOF) {
        int type = charType(c);
        if (type == 1) {
            alphabets++;
        } else if (type == 2) {
            digits++;
        } else if (type == 3) {
            specialSymbols++;
        }
    }

    printf("Total Alphabets: %d\n", alphabets);
    printf("Total Digits: %d\n", digits);
    printf("Total Special Symbols: %d\n", specialSymbols);

    return 0;
}