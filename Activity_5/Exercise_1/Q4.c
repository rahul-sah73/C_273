// 4.Write a program to accept n numbers and store all prime numbers in an array called prime. Display this array.

#include <stdio.h>
int isPrime(int num) {
    if (num <= 1) {
        return 0; 
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; 
        }
    }
    return 1; 
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n], prime[n], primeCount = 0;
    
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (isPrime(arr[i])) {
            prime[primeCount++] = arr[i];
        }
    }
    
    printf("Prime numbers in the array:\n");
    for (int i = 0; i < primeCount; i++) {
        printf("%d ", prime[i]);
    }
    printf("\n");
    
    return 0;
}