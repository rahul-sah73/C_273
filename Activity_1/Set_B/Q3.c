// A cashier has currency notes of denomination 1, 5 and 10. Accept the amount
// to be withdrawn from the user and print the total number of currency notes
// of each denomination the cashier will have to give.

#include<stdio.h>
int main() {
    int amount, notes_of_10, notes_of_5, notes_of_1;

    printf("Enter the amount to be withdrawn: ");
    scanf("%d", &amount);

    notes_of_10 = amount / 10;
    amount = amount % 10;

    notes_of_5 = amount / 5;
    amount = amount % 5;

    notes_of_1 = amount;
    
    printf("Number of 10 denomination notes: %d\n", notes_of_10);
    printf("Number of 5 denomination notes: %d\n", notes_of_5);
    printf("Number of 1 denomination notes: %d\n", notes_of_1);
    return 0;
}
