//Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

/*
Sample Test Cases:
Input 1:
A
Output 1:
Uppercase alphabet

Input 2:
a
Output 2:
Lowercase alphabet

Input 3:
3
Output 3:
Digit

Input 4:
#
Output 4:
Special character

*/
#include <stdio.h>
int main ()
{
    printf("Enter any character ");
    char c ;
    scanf("%c" , &c);
    if(c>='a' && c<='z')
    {
        printf("LowerCase Character");
    }
    else if(c>='A' && c<='Z')
    {
        printf("UpperCase Character");
    }
    else if (c>= '0' && c<= '9')
    {
        printf("Numeric Value");
    }
     else 
    {
     printf("Special Character");
    }
        return 0;

}
        