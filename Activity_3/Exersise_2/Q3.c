// 3.Modify the sample program 1 to display n lines as follows (here n=4).
// A
// B C
// D E F
// G H I J

#include<stdio.h>
int main() {
    int n, i, j;
    char ch = 'A';

    printf("Enter the number of lines (n): ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        for(j = 1; j <= i; j++){
            printf("%c ", ch);
            ch++;
        }
        printf("\n");
    }
    return 0;
}