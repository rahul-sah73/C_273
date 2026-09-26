// 2.Write a function for Linear Search, which accepts an array of n elements
// and a key as parameters and returns the position of key in the array and
// -1 if the key is not found. Accept n numbers from the user, store them in an
// array. Accept the key to be searched and search it using this function. 
// Display appropriate messages.

#include <stdio.h>
int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i; 
        }
    }
    return -1; 
}

int main() {
    int n, key;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the key to be searched: ");
    scanf("%d", &key);
    
    int position = linearSearch(arr, n, key);
    
    if (position != -1) {
        printf("Key %d found at position: %d\n", key, position);
    } else {
        printf("Key %d not found in the array.\n", key);
    }
    
    return 0;
}