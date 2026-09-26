// 2.Write a program to display multiplication tables from  to  having n multiples each.
//  The output should be displayed in a tabular format. For example, the multiplication 
//  tables of 2 to 9 having 10 multiples each is shown below.
// 2 × 1 = 2	  3 × 1 = 3   …………. 9 × 1 = 9
// 2 × 2 = 4	  3 × 2 = 6   …………. 9 × 2 = 18
// ………….	      ………….    
// 2 × 10 = 20	  3 × 10 = 30 ……….  9 × 10 = 90

#include <stdio.h>
int main() {
    int start, end, n, i, j;   
    printf("Enter the range (start and end): ");
    scanf("%d %d", &start, &end);
    printf("Enter the number of multiples (n): ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        for(j = start; j <= end; j++){
            printf("%d × %d = %d\t", j, i, i * j);
        }
        printf("\n");
    }
    return 0;
}
