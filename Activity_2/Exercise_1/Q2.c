// Write a program to accept three numbers and check whether the first is between the other two 
// numbers. Ex: Input 20 10 30. Output: 20 is between 10 and 30

#include<stdio.h>
int main() {
    int num1, num2, num3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if(num1 > num2 && num1 < num3) {
        printf("%d is between %d and %d.\n", num1, num2, num3);
    } else {
        printf("%d is not between %d and %d.\n", num1, num2, num3);
    }

    return 0;
}