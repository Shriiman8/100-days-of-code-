//Q27: Write a program to print the sum of the first n odd numbers.

/*
Sample Test Cases:
Input 1:
3
Output 1:
9

Input 2:
5
Output 2:
25

*/
#include <stdio.h>
int main ()
{
    printf("Input :");
    int n , sum = 0;
    scanf("%d" , &n);
    for(int i = 0; i<=n ; i++)
    {
        int o = 2 * i - 1;
        sum = sum + o;

    }
    printf("Sum of first %d odd numbers is = %d\n" , n , sum);
    
    return 0;


}