#include<stdio.h>
#include<conio.h>

 void main(){
 int num,reverse=0,orignal,reminder;
 clrscr();

 printf("Enter Number:");
 scanf("%d",&num);
 orignal = num;
 for(;num!=0; num = num/10){
  reminder = num%10;
  reverse = reverse * 10+ reminder;

  }
  if(orignal == reverse)
  printf("Palindrome Number");
  else
  printf("NOt Palinderome Number");

  getch();
  }




