#include <stdio.h>
 
int main() {
    int n, i, current, best;
    int arr[1000];
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
 
    current = arr[0];
    best = arr[0];
    for (i = 1; i < n; i++) {
        if (current + arr[i] > arr[i]) {
            current = current + arr[i];
        } else {
            current = arr[i];
        }
        if (current > best) {
            best = current;
        }
    }
    printf("%d\n", best);
    return 0;
}