// 3.Write a function, which accepts an integer array and an integer
// as parameters and counts the occurrences of the number in the array.
// Example: Input 1 5 2 1	6	3	8  2	9	15	1  30
// Number : 1
// Output: 1 occurs 3 times

#include <stdio.h>
int countOccurrences(int arr[], int n, int number) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == number) {
            count++;
        }
    }
    return count;
}

int main() {
    int n, number;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the number to count occurrences: ");
    scanf("%d", &number);
    
    int occurrences = countOccurrences(arr, n, number);
    
    printf("%d occurs %d times\n", number, occurrences);
    
    return 0;
}