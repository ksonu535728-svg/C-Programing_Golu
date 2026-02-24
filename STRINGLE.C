#include<stdio.h>
#include<conio.h>
#include<string.h>

  void main(){
  char str[50];
  int i;
  clrscr();
  printf("Enter A string:");
  scanf("%s",str);

  i=strlen(str);
  printf("Length of %s is %d\n",str,i);
  getch();
  }