#include <stdio.h>
 
int main() {
    int n, k, i, j, ans;
    int arr[1000];
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &k);
 
    for (i = 0; i <= n - k; i++) {
        ans = 0;
        for (j = i; j < i + k; j++) {
            if (arr[j] < 0) {
                ans = arr[j];
                break;
            }
        }
        printf("%d ", ans);
    }
    printf("\n");
    return 0;
}