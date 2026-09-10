//Q58: Find the maximum and minimum element in an array.


#include <stdio.h>
int main() {
    int b, i;
    printf("Enter number of elements: ");
    scanf("%d", &b);
    int arr[b];
    for (i = 0; i < b; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    int max = arr[0];
    int min = arr[0];
    for (i = 1; i < b; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    printf("Max=%d, Min=%d\n", max, min);
    return 0;
}