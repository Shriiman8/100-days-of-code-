#include <stdio.h>
 
int main() {
    int n, i, j, ans;
    int arr[1000];
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++) {
        ans = -1;
        for (j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                ans = arr[j];
                break;
            }
        }
        if (i != n - 1) {
            printf("%d,", ans);
        } else {
            printf("%d\n", ans);
        }
    }
    return 0;
}
 