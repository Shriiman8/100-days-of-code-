//Q62: Reverse an array without taking extra space.


#include <stdio.h>

int main() {
    int b, i, temp;

    printf("Enter number of elements: ");
    scanf("%d", &b);

    int arr[b];

    for (i = 0; i < b; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < b / 2; i++) {
        temp = arr[i];
        arr[i] = arr[b - 1 - i];
        arr[b - 1 - i] = temp;
    }
    printf("Reversed array: ");

    for(i = 0; i < b; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}