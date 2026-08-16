//Q13: Write a program to input a year and check whether it is a leap year or not using conditional statements.

/*
Sample Test Cases:
Input 1:
2020
Output 1:
Leap year

Input 2:
1900
Output 2:
Not a leap year

Input 3:
2000
Output 3:
Leap year

*/
#include <stdio.h>
int main ()
{
    printf("Enter any year \n");
    int n ;
    scanf("%d",&n);
    if (n%4==0){
        printf("Year is a leap year ");
    }
    else{
        printf("Year is not a leap year");
    }
    return 0;

}