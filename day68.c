#include <stdio.h>

int main() {
    int n, sum = 0;
    int nums[100];

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
        sum += nums[i];
    }

    int expected = n * (n + 1) / 2;
    printf("%d", expected - sum);

    return 0;
}
