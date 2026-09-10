//Q57: Find the sum of array elements.


#include <stdio.h>
int main() {
    int b, i, sum = 0;
    printf("Enter number of elements you want in array: ");
    scanf("%d", &b);
    int arr[b];
    for (i = 0; i < b; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }
    printf("Sum of array elements = %d\n", sum);
    return 0;
}