//Q18: Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 
/* 
90-100: Grade A 
80-89: Grade B 
70-79: Grade C 
60-69: Grade D 
below 60: Grade F.

/*
Sample Test Cases:
Input 1:
95
Output 1:
Grade A

Input 2:
82
Output 2:
Grade B

Input 3:
68
Output 3:
Grade D

Input 4:
50
Output 4:
Grade F

*/
#include <stdio.h>
int main ()
{
    printf("Enter your percentage ");
    double p;
    scanf("%lf" , &p);
    if (p<=100 && p>=90)
    {
        printf("Grade A");
    }
    else if(p<=89 && p>=80)
    {
        printf("Grade B");
    }
    else if(p<=79 && p>=70)
    {
        printf("Grade c");
    }
    else if(p<=69 && p>=60)
    {
        printf("Grade D");
    }
    else 
    {
        printf("Grade F");
    }
    return 0;
}