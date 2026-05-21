//identifing a number as even or odd

#include <stdio.h>
#include <conio.h>

int main() 
{
    clrscr();
    
    int a;
    printf("enter a number: ");
    scanf("%d", &a);
    
    if(a%2==0)
    	printf("%d is even!");
    else
    	printf("%d is odd!");
    	
	getch();
}