//Q39: Write a program to find the product of odd digits of a number.

/*
Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/
#include <stdio.h>
int main ()
{
    int n , pro = 1 , temp;
    printf("Enter a number : \n");
    scanf("%d", &n);
    while(n!=0)
    {
        temp = n%10;
        if(temp%2!=0)
        {
            pro = pro*temp;
        }
        n = n/10;
    }
    printf("Product of odd digits in number is : %d\n " ,pro);
    return 0;

}