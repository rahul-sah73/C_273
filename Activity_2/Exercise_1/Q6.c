// Accept a character from the user and check whether the character is a vowel or consonant.
// (Hint: a,e,i,o,u, A, E, I, O, U are vowels)

#include<stdio.h>
int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch); 
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
       ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("%c is a vowel.\n", ch);
    } else {
        printf("%c is a consonant.\n", ch);
    }
    return 0;
}