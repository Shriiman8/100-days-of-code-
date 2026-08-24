//Q29: Write a program to calculate the factorial of a number.

/*
Sample Test Cases:
Input 1:
5
Output 1:
120

Input 2:
3
Output 2:
6

*/
#include <stdio.h>
int main ()
{
    printf("Enter Number : \n");
    int n , fact=1;
    scanf("%d" , &n);
    for(int i = 1 ; i<=n ; i++ )
    {
        fact = fact * i;
    }
    printf("Factorial of = %d  \n" , fact);
    return 0;
}