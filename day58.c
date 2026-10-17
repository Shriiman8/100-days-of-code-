#include <stdio.h>
 
int main() {
    int n, i, j;
    int nums[1000];
    long long product;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    for (i = 0; i < n; i++) {
        product = 1;
        for (j = 0; j < n; j++) {
            if (j != i) {
                product = product * nums[j];
            }
        }
        printf("%lld ", product);
    }
    printf("\n");
    return 0;
}