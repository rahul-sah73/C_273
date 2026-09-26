// Accept two integers x and y and calculate the sum of all integers between x and y (both inclusive)

#include <stdio.h>
int main() {
    int x, y, sum = 0, i;
    printf("Enter two integers x and y: ");
    scanf("%d %d", &x, &y);
    
    for(i = x; i <= y; i++) {
        sum += i;
    }

    printf("The sum of integers between %d and %d is: %d\n", x, y, sum);
    return 0;
}
