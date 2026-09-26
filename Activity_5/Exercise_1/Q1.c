// 1.Write a program to accept n numbers and display the array in the reverse order.
// Write separate functions to accept and display.

#include <stdio.h>
void accept(int arr[], int n) {
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
}   

void displayReverse(int arr[], int n) {
    printf("Array in reverse order:\n");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    accept(arr, n);
    displayReverse(arr, n);
    return 0;
}