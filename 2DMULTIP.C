#include<stdio.h>
#include<conio.h>

 void main(){
  int a[10][10],b[10][10],mul[10][10];
  int i,j,r,c,k;
  clrscr();

  printf("Enter Num of Row:");
  scanf("%d",&r);
  printf("Enter Num of col:");
  scanf("%d",&c);

  printf("Enter 1st Matrix:\n");
   for(i=0; i<r; i++){
    for(j=0; j<c; j++){
     printf("Enter Elemant A[%d][%d]:",i+1,j+1);
      scanf("%d",&a[i][j]);
  }
    }
       printf("Enter 2nd Matrix:\n");
	for(i=0; i<r; i++){
	 for(j=0; j<c; j++){
	  printf("Enter Elemant B[%d][%d]:",i+1,j+1);
	   scanf("%d",&b[i][j]);
   }
    }

      // Multiplication of Two matrix
      printf("Multiplication Of Matrix\n");

	for(i=0; i<r; i++) {
	 for(j=0; j<c; j++) {
	  mul[i][j]=0;
	   for(k=0; k<c; k++){
	    mul[i][j]+=a[i][j]*b[k][j];
      }
	}
	  printf("printing Result\n");
	    for(i=0; i<r; i++){
	     for(j=0; j<c; j++){
	      printf("%d\t",mul[i][j]);
	 }
	  }
	      printf("\n");
	  }
	    getch();

	  }
