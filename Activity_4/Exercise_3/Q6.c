// 3.Write a recursive C function to print the digits of a number in reverse order. 
// Use this function in main to accept a number and print the digits in reverse order
// separated by tab.
// Example: 345    4	5	3

#include<stdio.h>
void print_digits_reverse(int n) {
    if (n < 10) {
        printf("%d\t", n);
    } else {
        printf("%d\t", n % 10);
        print_digits_reverse(n / 10);
    }
}

int main() {
    int number;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    printf("Digits in reverse order: ");
    print_digits_reverse(number);
    printf("\n");
    
    return 0;
}
