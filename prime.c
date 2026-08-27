//Q34: Write a program to check if a number is prime.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

*/
#include <stdio.h>
int main()
{
    printf("Enter a number : \n");
    int n , count = 0;
    scanf("%d" ,&n);
    for(int i = 1; i<n; i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
        if(count>2)
        {
            printf("Number is not a prime : \n");
        }
        else if(count==2)
        {
            printf("Number is prime : \n");
        }
        else 
        {
            printf("Number is 0 : \n");
        }


    
    return 0;
}