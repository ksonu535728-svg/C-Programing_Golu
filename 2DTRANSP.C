#include<stdio.h>
#include<conio.h>

 void main(){
 int a[10][10],t[10][10];
 int r,c,i,j;
 clrscr();

 printf("Enter Row And Columan");
 scanf("%d %d",&r,&c);

 printf("Enter Matrix Elemant\n");
  for(i=0; i<r; i++){
   for(j=0; j<c; j++){
    scanf("%d",&a[i][j]);
  }
   }
    //Transpose Logic
     for(i=0; i<r; i++){
      for(j=0; j<c; j++){
     t[j][i]=a[i][j];
   }
    }
     printf("\n Trnspose Matrix:\n");
      for(i=0; i<c; i++){
       for(j=0; j<r; j++){
     printf("%d ",t[i][j]);
   }
    printf("\n");
   }
    getch();
    }