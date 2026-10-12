#include <stdio.h>
 
int main() {
    int n, x, total, left = 0, right, ans = -1;
    scanf("%d", &n);
    total = n * (n + 1) / 2;
    for (x = 1; x <= n; x++) {
        left = left + x;              // sum from 1 to x
        right = total - left + x;     // sum from x to n
        if (left == right) {
            ans = x;
            break;
        }
    }
    printf("%d\n", ans);
    return 0;
}