#include<stdio.h>
#include<conio.h>

 void main(){
 char str[50];
 int i=0,length=0;
 clrscr();

 printf("Enter String:");
 scanf("%s",str);

 while(str[i]!='\0'){
 length++;
 i++;
 }
   printf("Length = %d",length);
   getch();

   }