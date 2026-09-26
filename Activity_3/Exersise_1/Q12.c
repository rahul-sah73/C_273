// 5. Write a program, which accepts a number n and displays each digit in words. 
// Example: 6702 Output = Six-Seven-Zero-Two.(Hint: Reverse the number and use a switch statement)

#include <stdio.h>

int main() {
    long long n, reverse = 0, digit;
    char word[10][20] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};

    printf("Enter a number: ");
    scanf("%lld", &n);

    while (n != 0) {
        reverse = reverse * 10 + n % 10;
        n /= 10;
    }

    printf("Output: ");
    while (reverse != 0) {
        digit = reverse % 10;
        printf("%s-", word[digit]);
        reverse /= 10;
    }
    printf("\b \n"); 
    return 0;
}
