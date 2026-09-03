//Q42: Write a program to check if a number is a perfect number.

/*
Sample Test Cases:
Input 1:
6
Output 1:
Perfect number

Input 2:
10
Output 2:
Not perfect number

*/
#include <stdio.h>
int main()
{
    printf("Enter a numnber : \n");
    int b , i, sum = 0;
    scnaf("%d" ,&b);
    for (i= 0 ;i<b;i++)
    {
        if (b%i==0)
        {
            sum = sum + i;
        }
    }
    if (sum == b)
        printf("Perfect number");
    else
        printf("Not perfect number");
    return 0;
        }