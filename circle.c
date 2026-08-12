//Q4: Write a program to calculate the area and circumference of a circle given its radius.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85

*/
#include <stdio.h>
#define PI 3.14
int main()
{
    printf("Enter the radius of the circle \n");
    int r;
    scanf("%d", &r);
    float a,c;
    c = 2*PI*r;
    a = PI*r*r;
    printf("Circumference = %.2f \n" , c);
    printf("Area = %.2f \n" , a);
    return 0;
}