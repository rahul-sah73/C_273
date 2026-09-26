// 2.Accept n numbers and display the number having the maximum sum of digits.

#include <stdio.h>
int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int n, i, num, maxSum = 0, maxNum = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d numbers: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++) {
        num = arr[i];
        if (sumOfDigits(num) > maxSum) {
            maxSum = sumOfDigits(num);
            maxNum = num;
        }
    }
    printf("The number having the maximum sum of digits is: %d\n", maxNum);
    return 0;
}