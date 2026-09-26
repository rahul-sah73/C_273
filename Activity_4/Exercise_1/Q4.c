// 2.Accept x and y coordinates of two points and write a menu driven program to perform the 
// Following operations till the user selects Exit.
// iv.Distance between points
// v.Slope of line between the points.
// vi.Check whether they lie in the same quadrant.
// vii.EXIT

#include <stdio.h>
#include <math.h>
int main() {
    int choice;
    double x1, y1, x2, y2;
    double distance, slope;

    while (1) {
        printf("Menu:\n");
        printf("1. Distance between points\n");
        printf("2. Slope of line between the points\n");
        printf("3. Check whether they lie in the same quadrant\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter coordinates of first point (x1 y1): ");
                scanf("%lf %lf", &x1, &y1);
                printf("Enter coordinates of second point (x2 y2): ");
                scanf("%lf %lf", &x2, &y2);
                distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
                printf("Distance between points: %lf\n", distance);
                break;
            case 2:
                printf("Enter coordinates of first point (x1 y1): ");
                scanf("%lf %lf", &x1, &y1);
                printf("Enter coordinates of second point (x2 y2): ");
                scanf("%lf %lf", &x2, &y2);
                if (x2 - x1 != 0) {
                    slope = (y2 - y1) / (x2 - x1);
                    printf("Slope of line between the points: %lf\n", slope);
                } else {
                    printf("Slope is undefined (vertical line).\n");
                }
                break;
            case 3:
                printf("Enter coordinates of first point (x1 y1): ");
                scanf("%lf %lf", &x1, &y1);
                printf("Enter coordinates of second point (x2 y2): ");
                scanf("%lf %lf", &x2, &y2);
                if ((x1 > 0 && y1 > 0 && x2 > 0 && y2 > 0) ||
                    (x1 < 0 && y1 > 0 && x2 < 0 && y2 > 0) ||
                    (x1 < 0 && y1 < 0 && x2 < 0 && y2 < 0) ||
                    (x1 > 0 && y1 < 0 && x2 > 0 && y2 < 0)) {
                    printf("Both points lie in the same quadrant.\n");
                } else {
                    printf("Points do not lie in the same quadrant.\n");
                }
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