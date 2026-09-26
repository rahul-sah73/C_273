// Accept dimensions of a cylinder and print the surface area and volume (Hint: surface area = 2πr2 + 2πrh, volume = πr2h)

#include<stdio.h>
int main(){

    float radius , height , area , volume ;
    float pi = 3.14159;

    printf("Enter the radius and height of the cylinder: ");
    scanf("%f %f", &radius , &height);

    area = 2 * pi * radius * radius + 2 * pi * radius * height;
    volume = pi * radius * radius * height;

    printf("Surface Area of Cylinder: %.2f\n", area);
    printf("Volume of Cylinder: %.2f\n", volume);


    return 0;
}
