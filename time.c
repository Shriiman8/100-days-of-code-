//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

/*
Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/
#include <stdio.h>
int main()
{
    printf("Enter time in seconds \n");
    int ts;
    scanf("%d",&ts);
    int h,m,s;
    h = ts/3600;
    m = (ts%3600)/60;
    s = ts%60;
    printf("time is = %d:%d:%d: \n " , h,m,s);
 return 0;

}