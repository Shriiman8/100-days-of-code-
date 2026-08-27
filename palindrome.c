//Q32: Write a program to check if a number is a palindrome.

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/
#include <stdio.h>
int main ()
{
    printf("ENTER THE NUMBER : \n");
    int n , digit , rev = 0;
    scanf("%d" , &n);
     while(n!=0)
    {
        digit = n%10;
        rev = rev * 10 + digit ;
        n = n/10;
    }
    if (n==rev)
    {
        printf("Number is palindrome : \n ");
    } 
    else {
        printf("Number is not palindrome : \n");
    } 
    return 0;
}