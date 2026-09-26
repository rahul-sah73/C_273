// 2.Write a menu driven program to perform the following operations till the user selects Exit.
// Accept appropriate data for each option. Use standard library functions from math.h
// i.Power	ii. Square Root	iii. Floor	iv. Ceiling	v. Exit

#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    double x, y, result;

    while (1) {
        printf("Menu:\n");
        printf("1. Power\n");
        printf("2. Square Root\n");
        printf("3. Floor\n");
        printf("4. Ceiling\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter base and exponent: ");
                scanf("%lf %lf", &x, &y);
                result = pow(x, y);
                printf("Result: %lf\n", result);
                break;
            case 2:
                printf("Enter a number: ");
                scanf("%lf", &x);
                result = sqrt(x);
                printf("Result: %lf\n", result);
                break;
            case 3:
                printf("Enter a number: ");
                scanf("%lf", &x);
                result = floor(x);
                printf("Result: %lf\n", result);
                break;
            case 4:
                printf("Enter a number: ");
                scanf("%lf", &x);
                result = ceil(x);
                printf("Result: %lf\n", result);
                break;
            case 5:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}