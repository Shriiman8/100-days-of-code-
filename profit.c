//Q22: Write a program to find profit or loss percentage given cost price and selling price.

/*
Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

*/
#include <stdio.h>
int main()
{
    printf("Enter cost price and selling price \n");
    int c,s;
    scanf("%d %d", &c , &s);
    if(c==s)
    {
        printf("No loss No Profit");
    }
    else if(c>s)
    {
        int l = c-s; 
        double lp = ((double)l/c)*100;
        printf("Loss %1f%%  " , lp);
    }
    else {
        int p = s-c;
        double pp = ((double)p/c)*100;
        printf("Profit %1f%% " , pp);
    }
    return 0;

}