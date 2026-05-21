#include <stdio.h>

void FirstName(char nm[]){
    int f=0;
    printf("\nFirst Name: ");
    while(nm[f]!=' '){
	printf("%c", nm[f]);
	f++;
    }
}

void LastName(char nm[]){
    int l=0;

    printf("\nLast Name: ");
    while(nm[l]!=NULL){
	l++;
    }
//    printf("\n l=%d",l);

    while(nm[l]!=' '){
	l--;
    }
    while(nm[l]!=NULL){
    printf("%c", nm[l]);
    l++;
    }

}

void IntialsLastName(char nm[]){

	int s=1,l=0;
    while(nm[l]!=NULL){
	l++;
    }
    while(nm[l]!=' '){
	l--;
    }
    printf("%c", nm[0]);
    while(s<l){
	if(nm[s]==' '){
	printf("%c.", nm[s+1]);
	}
	s++;
    }
    while(nm[l]!=NULL){
    printf("%c", nm[l]);
    l++;
    }
}

void main(){
    int l=0, f=0, s=1, i=0;
    char nm[50];
    clrscr();
    printf("enter your name: ");
     gets(nm);
     printf("Name : %s",nm);

    FirstName(nm);
    LastName(nm);
    IntialsLastName(nm);
    getch();
}
