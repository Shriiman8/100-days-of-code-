//Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

/*
Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3

*/
#include <stdio.h>
# include <math.h>
int main ()
{
    printf("Enter Two Numbers : \n");
    int n,m;
    double result ;
    scanf("%d %d", &n ,&m);
    printf("Select you choice of operation : \n");
    printf("1 : Addition \n");
    printf("2 : Substraction \n");
    printf("3 : Multiplication \n");
    printf("4 : Division \n");
    printf("5 : Modulus \n");
    printf("6 : Power \n");
    printf("     \n");
    int a;
    scanf("%d" , &a);
    switch (a)
    {
        case 1:
        result = n+m;
        printf("Addition of %d and %d = %lf \n" , n , m , result );
        break;
        case 2:
        result = n - m ;
        printf("Substraction of %d and %d = %lf \n" , n , m , result );
        break;
        case 3:
        result = n * m ;
        printf("Multiplication of %d and %d = %lf \n" ,n , m , result);
        break;
        case 4:
        result = n / m ;
        printf("Division of %d and %d = %lf \n" , n, m , result);
        break;
        case 5:
        result = n % m;
        printf("Modulus of %d and %d = %lf \n" , n , m , result);
        break;
        case 6:
        result = pow(n ,m);
        printf("%d To the power %d = %lf \n" , n ,m ,result );
        break;
        default :
        printf("Invalid Operation :");

        
    }
    return 0;

}