// 3.Write a program to find the intersection of the two sets of integers. 
// Store the intersection in another array.

#include <stdio.h>
void findIntersection(int set1[], int n1, int set2[], int n2, int intersection[], int *n3) {
    *n3 = 0;
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (set1[i] == set2[j]) {
                intersection[(*n3)++] = set1[i];
                break;  
            }
        }
    }
}

int main() {
    int n1, n2, n3;
    
    printf("Enter the number of elements in set 1: ");
    scanf("%d", &n1);
    int set1[n1];
    printf("Enter %d numbers for set 1:\n", n1);
    for (int i = 0; i < n1; i++) {
        scanf("%d", &set1[i]);
    }
    
    printf("Enter the number of elements in set 2: ");
    scanf("%d", &n2);
    int set2[n2];
    printf("Enter %d numbers for set 2:\n", n2);
    for (int i = 0; i < n2; i++) {
        scanf("%d", &set2[i]);
    }
    
    int intersection[n1 < n2 ? n1 : n2]; 
    findIntersection(set1, n1, set2, n2, intersection, &n3);
    
    printf("Intersection of the two sets:\n");
    for (int i = 0; i < n3; i++) {
        printf("%d ", intersection[i]);
    }
    printf("\n");
    
    return 0;
}