// 3.Display all perfect numbers below 500. [A perfect number is a number,
// such that the sum of its factors is equal to the number itself]. 
// Example: 6 (1 + 2 + 3), 28 (1+2+4+7+14)

#include <stdio.h>
int main() {
    int i, j, sum;
    printf("Perfect numbers below 500 are:\n");
    for (i = 1; i < 500; i++) {
        sum = 0;
        for (j = 1; j <= i / 2; j++) {
            if (i % j == 0) {
                sum += j;
            }
        }
        if (sum == i) {
            printf("%d\n", i);
        }
    }
    return 0;
}