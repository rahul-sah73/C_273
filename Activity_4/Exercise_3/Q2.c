// 2.Write a recursive C function to calculate the GCD of two numbers.
//  Use this function in main. The GCD is calculated as : 
//  gcd(a,b) = a if b = 0 = gcd (b, a mod b) otherwise

#include <stdio.h>
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}

int main() {
    int num1, num2;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    int result = gcd(num1, num2);
    printf("GCD of %d and %d is: %d\n", num1, num2, result);
    
    return 0;
}