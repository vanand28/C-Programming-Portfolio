// printing multiplication of a matrices
#include <stdio.h>
#include <conio.h>

int main() 
{
    clrscr();
    
int main() {
    int a[3][3],b[3][2],c[3][5],i,j,k,s=0,col;
     printf("Enter numbers for First Matrix\n");
    for (i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Enter a number  ");
            scanf("%d",&a[i][j]);
        }
    }
    
    printf("How many col in Matrix-2 ");
    scanf("%d",&col);
    
    printf("\nEnter numbers for Second Matrix\n");
    for (i=0;i<3;i++){
        for(j=0;j<col;j++){
            printf("Enter a number  ");
            scanf("%d",&b[i][j]);
        }
    }
     
    
    printf("\nFirst Matrix\n");
    for (i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("\t%d",a[i][j]);
        }
        printf("\n");
    }
    
    printf("\nSecond Matrix\n");
    for (i=0;i<3;i++){
        for(j=0;j<col;j++){
            printf("\t%d",b[i][j]);
        }
        printf("\n");
    }
printf("\n");
    for (i=0;i<3;i++){
        for(j=0;j<col;j++){
            s=0;
            for(k=0;k<3;k++){
               s=s+a[i][k]*b[k][j];
               if(k!=2)
                printf("(%d*%d)+",a[i][k],b[k][j]);
               else
                printf("(%d*%d)",a[i][k],b[k][j]);
            }
             c[i][j]=s;
              printf("\t");
        }
         printf("\n");
    }
    
    printf("\nMultiplication of Matrics\n");
    for (i=0;i<3;i++){
        for(j=0;j<col;j++){
            printf("\t%d",c[i][j]);
        }
        printf("\n");
    }
    

    return 0;
        
    getch();
}