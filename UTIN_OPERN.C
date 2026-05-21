//using utinary operators
#include <stdio.h>
#include <conio.h>

int main() 
{
    clrscr();
    
    int i,t;
    i=10;
    printf("i= %d",i);
    
    i++;
    printf("\ni'= %d",i);
    
    ++i;
    printf("\ni''= %d",i);
    
    t=++i+5;
    printf("\nt= %d",t);
    printf("\ni'''= %d",i);
    
    t=++t-i++;
    printf("\nt'= %d",t);
    printf("\ni''''= %d",i);
    
    getch();
}