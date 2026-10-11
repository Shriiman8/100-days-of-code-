#include <stdio.h>
 
int main() {
    int n, i, total = 0, left = 0, right, ans = -1;
    int arr[1000];
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        total = total + arr[i];
    }
    for (i = 0; i < n; i++) {
        right = total - left - arr[i];
        if (left == right) {
            ans = i;
            break;
        }
        left = left + arr[i];
    }
    printf("%d\n", ans);
    return 0;
}