#include<stdio.h>

void reverse(int *arr, int s) {
    int *start = arr;           
    int *end = arr + s - 1;  
    int temp;

    while (start < end) {
        
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int s = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < s; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    reverse(arr, s);

    printf("Reversed array: ");
    for (int i = 0; i < s; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}