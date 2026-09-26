// Accept three dimensions length (l), breadth(b) and height(h) of a cuboid and print surface area and volume (Hint : surface area=2(lb+lh+bh ), volume = lbh )

#include<stdio.h>
int main(){ 
    
    float l , b , h , area , volume ;
    printf("Enter the length, breadth and height of the cuboid: ");
    scanf("%f %f %f", &l , &b , &h);

    area = 2 * (l * b + l * h + b * h);
    volume = l * b * h;

    printf("Surface Area of Cuboid: %.2f\n", area);
    printf("Volume of Cuboid: %.2f\n", volume);

    return 0;
}