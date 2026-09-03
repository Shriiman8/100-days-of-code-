//Q43: Write a program to check if a number is a strong number.

/*
Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/
#include <stdio.h>
int main() {
    int b, temp, digit, fact, sum = 0;
    printf("enter number : ");
    scanf("%d", &b);
    temp = b;
    while (temp > 0) {
        digit = temp % 10;
        fact = 1;
        for (int i = 1; i <= digit; i++) {
            fact = fact * i;
        }
        sum = sum + fact;
        temp = temp / 10;
    }
    if (sum == b)
        printf("Strong number");
    else
        printf("Not strong number");
    return 0;
}