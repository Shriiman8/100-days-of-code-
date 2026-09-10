//Q55: Write a program to print all the prime numbers from 1 to n.


#include <stdio.h>

int main() {
    int b, i, j, factor;

    printf("Enter number: ");
    scanf("%d", &b);

    for (i = 1; i <= b; i++) {
        factor = 0;

        for (j = 1; j <= i; j++) {
            if (i % j == 0) {
                factor++;
            }
        }

        if (factor == 2) {
            printf("%d ", i);
        }
    }

    return 0;
}