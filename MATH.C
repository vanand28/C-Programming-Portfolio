//using math.h library to perform calculations

#include <stdio.h>
#include <conio.h>
#include <math.h>

int main() 
{
    int a, b, ssq, sc;

    clrscr();
    
    printf("Enter number 'a' : ");
    scanf("%d", &a);

    printf("Enter number 'b' : ");
    scanf("%d", &b);

    ssq = (pow(a,2) + pow(b,2) + 2*a*b);
    sc  = (pow(a,3) + pow(b,3) + 3*pow(a,2)*b + 3*a*pow(b, 2));

    printf("\n(a+b)^2 = %d", ssq);
    printf("\n(a+b)^3 = %d", sc);

    getch();

}