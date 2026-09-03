//Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/
#include <stdio.h>

int main() {
    int n, temp, first, last, div = 1, middle, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    last = n % 10;

    temp = n;
    while (temp >= 10) {
        temp = temp / 10;
        div = div * 10;
    }

    first = temp;

    middle = (n % div) / 10;

    result = last * div + middle * 10 + first;

    printf("Number after swapping = %d", result);

    return 0;
}