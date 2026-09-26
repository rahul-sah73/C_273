// Write a program to display all prime numbers between  n	and m .

#include <stdio.h>
int main(){
    int n, m, i, j, isPrime;

    printf("Enter the range (n and m): ");
    scanf("%d %d", &n, &m);

    printf("Prime numbers between %d and %d are: ", n, m);
    for(i = n; i <= m; i++){
        if(i < 2) continue; 
        isPrime = 1; 
        for(j = 2; j <= i/2; j++){
            if(i % j == 0){
                isPrime = 0; 
                break;
            }
        }
        if(isPrime){
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
