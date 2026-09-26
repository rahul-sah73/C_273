// 1.Accept two fractions (numerator, denominator) and perform the following operations
// till the user selects Exit.i.Addition ii.Subtraction iii.Multiplication iv.EXIT

#include <stdio.h>
int main() {
    int choice;
    int num1, den1, num2, den2;
    int result_num, result_den;
    while (1) {
        printf("Menu:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter first fraction (numerator denominator): ");
                scanf("%d %d", &num1, &den1);
                printf("Enter second fraction (numerator denominator): ");
                scanf("%d %d", &num2, &den2);

                result_num = num1 * den2 + num2 * den1;
                result_den = den1 * den2;

                printf("Result: %d/%d\n", result_num, result_den);
                break;
            case 2:
                printf("Enter first fraction (numerator denominator): ");
                scanf("%d %d", &num1, &den1);
                printf("Enter second fraction (numerator denominator): ");
                scanf("%d %d", &num2, &den2);

                result_num = num1 * den2 - num2 * den1;
                result_den = den1 * den2;

                printf("Result: %d/%d\n", result_num, result_den);
                break;
            case 3:
                printf("Enter first fraction (numerator denominator): ");
                scanf("%d %d", &num1, &den1);
                printf("Enter second fraction (numerator denominator): ");
                scanf("%d %d", &num2, &den2);

                result_num = num1 * num2;
                result_den = den1 * den2;

                printf("Result: %d/%d\n", result_num, result_den);
                break;
            case 4:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}