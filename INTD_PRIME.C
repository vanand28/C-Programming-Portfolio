//printing prime numbers between two numbers

#include <stdio.h>
#include <conio.h>

int main() 
{
    clrscr();
    
    int n1, n2, f, c1, c2;
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
    
    for(c1=n1; c1<n2; c1++){
    	f=0;
    	for(c2=2; c2<=n1/2; c2++){
    		if(c1%c2==0){
    			f=1;
    			break;
    		}
    	}
    	if(f==0)
    		printf("\n%d",c1);
    }
    
    getch();
}