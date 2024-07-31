#include <stdio.h>
void Subarray(int arr[], int n, int t) {
    int s = 0, Sum = 0;

    for (int e = 0; e < n; e++) {
        Sum += arr[e];
        while (Sum > t && s <= e) {
            Sum -= arr[s];
            s++;
        }

        if (Sum == t) {
            printf("Subarray with the given sum %d is found between indices %d and %d.\n", t, s, e);
            printf("Subarray: ");
            for (int i = s; i <= e; i++) {
                printf("%d ", arr[i]);
            }
            printf("\n");
            return;
        }
    }
    printf("No subarray with the given sum %d is found.\n", t);
}

int main() {
    int arr[] = {1, 4, 20, 3, 10, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int t ;
    printf("Enter the sum : ");
    scanf("%d",&t);

    Subarray(arr, n, t);

    return 0;
}