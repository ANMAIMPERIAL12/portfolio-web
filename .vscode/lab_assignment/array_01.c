#include <stdio.h>
void reverse(int* arr, int s, int e) {
    while (s < e) {
        int t = arr[s];
        arr[s] = arr[e];
        arr[e] = t;
        s++;
        e--;
    }
}
void rotate(int* arr, int n, int j) {
    j = j % n;
    reverse(arr, 0, n - 1);
    reverse(arr, 0, j - 1);
    reverse(arr,j, n - 1);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k ;
    printf("Enter the value from where you want to rotate: ");
    scanf("%d",&k);
    
    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    rotate(arr, n, k);
    
    printf("Array after rotating by %d positions: ", k);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}