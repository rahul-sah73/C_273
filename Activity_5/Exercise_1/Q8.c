#include <stdio.h>

void mergeSortedArrays(int a1[], int size1, int a2[], int size2, int a3[]) {
    int i = 0, j = 0, k = 0;

    // Traverse both arrays and insert the smaller element into a3
    while (i < size1 && j < size2) {
        if (a1[i] < a2[j]) {
            a3[k++] = a1[i++];
        } else {
            a3[k++] = a2[j++];
        }
    }

    // Store remaining elements of a1, if any
    while (i < size1) {
        a3[k++] = a1[i++];
    }

    // Store remaining elements of a2, if any
    while (j < size2) {
        a3[k++] = a2[j++];
    }
}

int main() {
    int size1, size2;

    // Input for first array
    printf("Enter the size of the first array (a1): ");
    scanf("%d", &size1);
    int a1[size1];
    printf("Enter %d elements for a1 (in sorted order):\n", size1);
    for (int i = 0; i < size1; i++) {
        scanf("%d", &a1[i]);
    }

    // Input for second array
    printf("Enter the size of the second array (a2): ");
    scanf("%d", &size2);
    int a2[size2];
    printf("Enter %d elements for a2 (in sorted order):\n", size2);
    for (int i = 0; i < size2; i++) {
        scanf("%d", &a2[i]);
    }

    int a3[size1 + size2]; // Third array to hold the merged result

    // Merge the arrays
    mergeSortedArrays(a1, size1, a2, size2, a3);

    // Display the result
    printf("Merged array a3: ");
    for (int i = 0; i < size1 + size2; i++) {
        printf("%d ", a3[i]);
    }
    printf("\n");

    return 0;
}