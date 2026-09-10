/*
Q54: Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *
*/
#include <stdio.h>

int main() {
    int b, i, j,k;

    printf("Enter number of rows: ");
    scanf("%d", &b);
    for (i = 1; i <= b; i++) {
        for (j = 1; j <= b - i; j++) {
            printf(" ");
        }
        for (k = 1; k <= 2 * i - 1; k++) {
            printf("*");
        }
        printf("\n");
    }
    for (i = b - 1; i >= 1; i--) {
        for (j = 1; j <= b - i; j++) {
            printf(" ");
        }
        for (k = 1; k <= 2 * i - 1; k++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}