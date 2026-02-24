#include<stdio.h>
#include<conio.h>
 void main(){
 int n,i;
 clrscr();
  unsigned long long fact =1;
  printf("Enter number:");
  scanf("%d",&n);
  for(i=1;i<=n; i++)
  fact *=i;
  printf("factorial =%llu\n",fact);

  getch();
  }
