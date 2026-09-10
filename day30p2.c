//Q60: Count positive, negative, and zero elements in an array.


#include <stdio.h>
int main() {
    int b, i,positive = 0, negative = 0, zero = 0;
    printf("Enter number of elements: ");
    scanf("%d", &b);
    int arr[b];
    for (i = 0; i < b; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]);
        if (arr[i] > 0) {
            positive++;
        } else if (arr[i] < 0) {
            negative++;
        } else {
            zero++;
        }
    }
    printf("Positive=%d, Negative=%d, Zero=%d\n",
           positive, negative, zero);
    return 0;
}