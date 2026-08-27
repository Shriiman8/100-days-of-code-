//Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/
#include <stdio.h>
int main ()
{
    printf("Enter a number \n");
    int n,temp,digit,digits=0,sum=0;
    scanf("%d" , &n);
    temp = n;
    while(temp!=0)
    {
        digits++;
        temp /= 10;
    }
    temp = n;
    while (temp !=0)
    {
        digit = temp % 10;
        int power =1;
        for (int i = 0; i < digits ; i++)
        {
            power *= digit;
        }
        sum += power; 
        temp /= 10;
    }
    if (sum == n)
    printf("%d is an armstrong number \n " , n);
    else 
    printf("%d is not an armstrong number \n " , n);

    return 0;
}
