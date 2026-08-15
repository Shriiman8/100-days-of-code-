//Q11: Write a program to input an integer and check whether it is even or odd using if–else.

/*
Sample Test Cases:
Input 1:
7
Output 1:
7 is odd

Input 2:
12
Output 2:
12 is even

*/
#include <stdio.h>
int main ()
{
    printf("Enter an Integer");
    int n;
    scanf("%d", &n);
    if(n/2==0)
    {
        printf("Integer is even");
    }
    else
    {
        printf("Inetger is odd");

    }
    return 0;


}