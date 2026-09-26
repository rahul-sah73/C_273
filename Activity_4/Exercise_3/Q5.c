// 2.Write a recursive function to calculate the sum of digits of a number
// till you get a single digit number.Example: 961 -> 16 -> 5. 
// (Note: Do not use a loop)


#include<stdio.h>

int sum_of_digits(int n) {
    if (n < 10) {
        return n; 
    } else {
        int sum = 0;
        while (n > 0) {
            sum += n % 10; 
            n /= 10; 
        }
        return sum_of_digits(sum);
    }
}

int main() {
    int number;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    int result = sum_of_digits(number);
    printf("The single digit sum of %d is: %d\n", number, result);
    
    return 0;
}