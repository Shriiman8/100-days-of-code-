#include <stdio.h>
 
int main() {
    int n, k, i, j, max;
    int arr[1000];
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter k");
    scanf("%d", &k);
 
    for (i = 0; i <= n - k; i++) {
        max = arr[i];
        for (j = i; j < i + k; j++) {
            if (arr[j] > max) {
                max = arr[j];
            }
        }
        printf("%d ", max);
    }
    printf("\n");
    return 0;
}