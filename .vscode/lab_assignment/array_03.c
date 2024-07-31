#include <stdio.h>
void merge(int arr1[], int n1, int arr2[], int n2) {
    int i = n1 - 1;  
    int j = n2 - 1;  
    int k = n1 + n2 - 1;  

    while (i >= 0 && j >= 0) {
        if (arr1[i] > arr2[j]) {
            arr1[k--] = arr1[i--];
        } else {
            arr1[k--] = arr2[j--];
        }
    }
    while (j >= 0) {
        arr1[k--] = arr2[j--];
    }
}

int main() {
    int arr1[10] = {1, 3, 5, 7, 9}; 
    int arr2[] = {2, 4, 6, 8, 10};
    int n1 = 5; 
    int n2 = 5; 
    merge(arr1, n1, arr2, n2);
    printf("Array after merging the given two sorted arrays: ");
    for (int i = 0; i < n1 + n2; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");

    return 0;
}