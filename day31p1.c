//Q61: Search for an element in an array using linear search.


#include <stdio.h>
int main() {
    int b, i, search;
    int found = 0;
    printf("Enter number of elements: ");
    scanf("%d", &b);
    int arr[b];
    for (i = 0; i < b; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Enter element to search: ");
    scanf("%d", &search);
    for (i = 0; i < b; i++) {
        if (arr[i] == search) {
            printf("Found at index %d\n", i);
            found = 1;
        }
    }
    if (found == 0) {
        printf("-1\n");
    }
    return 0;
}