//Q8: Write a program to find and display the sum of the first n natural numbers.

/*
Sample Test Cases:
Input 1:
5
Output 1:
Sum=15

Input 2:
10
Output 2:
Sum=55

*/
#include <stdio.h>
int main ()
{
 printf("Enter a number: ");
    int n ;
    scanf("%d", &n);
    printf("the sum of n natural numbers is ");
    int sum = (n*(n+1))/2;
    printf("%d", sum);
return 0;
}
