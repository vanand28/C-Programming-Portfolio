//store all the prime numbers between 1 and 100 in an array and print that

#include <stdio.h>
#include <conio.h>

int main() {
    clrscr();
	
	int a, b , f , i = 0 , j , k , p[25];
	for(a=2; a<=100; a++){
		f=0;
		for(b=2; b<=a/2; b++){
			if(a%b==0){
				f=1;
				break;
			}
		if(f==0){
			p[i] = a;
			i++
		}
	}
	
	printf("prime numbers between 1 and 100 are:-");
	for(j=0; j<i; j++){
		printf("\n%d", p[j]);
	}
	for(j=0; j<1; j++){
		for(k=0; k<=10; k++){
			printf("%d x %d = %d", p[j], k, p[j]*k);
		}
	}
	
    getch();
}