//printing table of a number

#include <stdio.h>
#include <conio.h>

int main() 
{
    clrscr();
    
    int i,n;
	printf("Enter a number: ");
	scanf("%d", &n);
	
	for(i=1; i<=10; i++)
		printf("\n%d x %d = %d",n, i, n*i);
	
	getch();
}

