// Accept initial velocity (u), acceleration (a) and time (t). Print the final velocity (v) and distance (s) travelled. (Hint: v = u + at, s = u + at2)

#include<stdio.h>
int main(){
    
    float u , a , t , v , s ;
    printf("Enter the initial velocity, acceleration and time: ");
    scanf("%f %f %f", &u , &a , &t);

    v = u + a * t;
    s = u * t + 0.5 * a * t * t;

    printf("Final Velocity: %.2f\n", v);
    printf("Distance Travelled: %.2f\n", s);

    return 0;
    
}