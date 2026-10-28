#include <stdio.h>
 
int main() {
    int n, k, i, j, sum, max;
    int arr[1000];
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter k");
    scanf("%d", &k);
 
    max = 0;
    for (i = 0; i <= n - k; i++) {
        sum = 0;
        for (j = i; j < i + k; j++) {
            sum = sum + arr[j];
        }
        if (i == 0 || sum > max) {
            max = sum;
        }
    }
    printf("%d\n", max);
    return 0;
}