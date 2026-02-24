#include<stdio.h>
#include<conio.h>

  void main(){
  int r,c,i,j;
  int a[10][10],b[10][10],res[10][10];
  clrscr();

  printf("Enter Row...");
  scanf("%d",&r);

  printf("Enter Column..");
  scanf("%d",&c);

  printf("Enter 1st Array...");
   for(i=0; i<r;i++){
    for(j=0; j<c; j++){
    scanf("%d",&a[i][j]);

    }
      }
   printf("Enter 2nd Array...");
    for(i=0; i<r; i++){
     for(j=0; j<c; j++){
     scanf("%d",&b[i][j]);

    }
      }
      printf("Addition 2D Matrix \n");
      for(i=0; i<r; i++){
       for(j=0; j<c; j++){
      res[i][j]=a[i][j]+b[i][j];
     }
       }
	 for(i=0; i<r; i++){
	  for(j=0; j<c; j++){
	 printf("%d ",res[i][j]);
     }
	printf("\n");
     }
	 getch();
     }






