// Accept two integers from the user and interchange them. Display the interchanged numbers

#include<stdio.h>
int main(){

    int a, b, temp;

    printf("Enter two integers (a b): ");
    scanf("%d %d", &a, &b);

    // Interchanging the values
    temp = a;
    a = b;
    b = temp;

    printf("After interchanging: a = %d, b = %d\n", a, b);

    return 0;
}   