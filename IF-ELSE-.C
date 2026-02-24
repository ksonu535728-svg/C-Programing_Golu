#include<stdio.h>
#include<conio.h>
void main(){
int age;
clrscr();

printf("Enter your age");
scanf("%d",&age);

if(age<18){
printf("Your are tinger wait for 18 year old\n");
}
 else if(age>70){
printf("Your are old Not eligibale \n");
}
else{
printf("You are eligible for a liensces\n");
}
printf("Your age is %d");
getch();
}