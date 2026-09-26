// Accept inner and outer radius of a ring and print the perimeter and area of the ring (Hint: perimeter = 2 π (a+b) , area = π (a2-b2) )

#include<stdio.h>
int main(){

    float inner_radius , outer_radius , perimeter , area ;
    float pi = 3.14159;

    printf("Enter the inner and outer radius of the ring: ");
    scanf("%f %f", &inner_radius , &outer_radius);  

    perimeter = 2 * pi * (inner_radius + outer_radius);
    area = pi * (outer_radius * outer_radius - inner_radius * inner_radius);    

    printf("Perimeter of Ring: %.2f\n", perimeter);
    printf("Area of Ring: %.2f\n", area);


    return 0;
}