#include <stdio.h>
int main() {
    int x, y, choice, num;
    printf("Enter two numbers (x and y): ");
    scanf("%d %d", &x, &y);
    printf("Choose an operation:\n");
    printf("1. Equality\n2. Less Than\n3. Quotient and Remainder\n4. Range\n5. Swap\nEnter your choice (1-5): ");
    scanf("%d", &choice);
    switch(choice) {
        case 1:
            if(x == y) {
                printf("%d is equal to %d\n", x, y);
            } else {
                printf("%d is not equal to %d\n", x, y);
            }
            break;
        case 2:
            if(x < y) {
                printf("%d is less than %d\n", x, y);
            } else {
                printf("%d is not less than %d\n", x, y);
            }
            break;
        case 3:
            if(y != 0) {
                printf("Quotient: %d, Remainder: %d\n", x / y, x % y);
            } else {
                printf("Error! Division by zero is not allowed.\n");
            }
            break;
        case 4:
            printf("Enter a number to check if it lies between %d and %d: ", x, y);
            scanf("%d", &num);
            if(num >= x && num <= y) {
                printf("%d lies between %d and %d (inclusive)\n", num, x, y);
            } else {
                printf("%d does not lie between %d and %d (inclusive)\n", num, x, y);
            }
            break;
        case 5:
            int temp = x;
            x = y;
            y = temp;
            printf("After swapping: x = %d, y = %d\n", x, y);
            break;
        default:
            printf("Invalid choice! Please select a valid option (1-5).\n");
    }

    return 0;
}