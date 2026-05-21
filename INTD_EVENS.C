//printing all the even numbers between two numbers

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
    
    if(n1%2!=0)
    	n1 = n1+1;
    else
    	n1 = n1+2;
    	
    printf("intermediate even numbers are: ");
    for(ctr=n1; ctr<n2; ctr=ctr+2)
    	printf("\n%d",ctr);
    	
	getch();
}