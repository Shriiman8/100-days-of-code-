//Q59: Count even and odd numbers in an array.


#include <stdio.h>
int main() {
    int b, i;
    int even = 0, odd = 0;
    printf("Enter number of elements: ");
    scanf("%d", &b);
    int arr[b];
    for (i = 0; i < b; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]);

        if (arr[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }
    printf("Even=%d, Odd=%d\n", even, odd);
    return 0;
}