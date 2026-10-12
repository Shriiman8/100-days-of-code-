#include <stdio.h>
 
int main() {
    int n, i, j, count, ans = -1;
    int nums[1000];
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    for (i = 0; i < n; i++) {
        count = 0;
        for (j = 0; j < n; j++) {
            if (nums[j] == nums[i]) {
                count++;
            }
        }
        if (count > n / 2) {
            ans = nums[i];
            break;
        }
    }
    printf("%d\n", ans);
    return 0;
}