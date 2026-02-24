#include<stdio.h>
#include<conio.h>


  int fact(int n){
    if(n==0||n==1){
      return 1;
    }
      else
  {
     return n*fact(n-1);
  }
    }
	int main(){
	int num;
	clrscr();
	printf("Enter A Number:");
	scanf("%d",&num);

	printf("\n Factorial Num Of %d is %d",num,fact,(num));


	getch();

	}

