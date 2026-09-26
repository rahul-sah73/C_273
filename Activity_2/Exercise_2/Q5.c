//  2. rite a program having a menu with the following options and corresponding actions

// Options	Actions
// 1. Area of square	            Accept length, Compute area of square and print
// 2. Area of Rectangle	        Accept length and breadth, Compute area of rectangle and print
// 3. Area of triangle	            Accept base and height, Compute area of triangle and print

#include <stdio.h>

int main() {
    float length, breadth, base, height;
    float area;
    int choice;

    printf("Choose an option:\n");
    printf("1. Area of square\n");
    printf("2. Area of Rectangle\n");
    printf("3. Area of triangle\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Enter the length of the square: ");
            scanf("%f", &length);
            area = length * length;
            printf("Area of square: %.2f\n", area);
            break;
        case 2:
            printf("Enter the length and breadth of the rectangle: ");
            scanf("%f %f", &length, &breadth);
            area = length * breadth;
            printf("Area of rectangle: %.2f\n", area);
            break;
        case 3:
            printf("Enter the base and height of the triangle: ");
            scanf("%f %f", &base, &height);
            area = 0.5 * base * height;
            printf("Area of triangle: %.2f\n", area);
            break;
        default:
            printf("Invalid choice! Please select a valid option (1-3).\n");
    }

    return 0;
}