#include <stdio.h>
int main() {
    int i, j, n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (i = n; i >= 1; i--) {
        for (j = 0; j < n - i; j++) {
            printf(" ");
        }
        for (j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}