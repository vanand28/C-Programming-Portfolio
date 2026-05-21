//printing all numbers between two numbers

#include <stdio.h>
#include <conio.h>

int main() 
{
    clrscr();
    
    int n1, n2, ctr;
    printf("enter first no. ");
    scanf("%d", &n1);
    printf("enter last no. ");
    scanf("%d", &n2);
    
    if(n1>n2)
    {
    	n1=n1+n2;
    	n2=n1-n2;
    	n1=n1-n2;
    }
    
    printf("intermediate numbers are: ");
    for(ctr=n1+1; ctr<n2; ctr++)
    	printf("\n%d",ctr);
    	
	getch();
}