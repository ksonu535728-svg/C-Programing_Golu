#include<stdio.h>
#include<conio.h>
int main()
{
int a,b;
clrscr();
printf("enter two number:\n");
scanf("%d %d",&a,&b);
printf("before swapping: a=%d,b=%d\n",a,b);
a=a+b;
b=a-b;
a=a-b;
printf(" after swapping: a=%d,b=%d\n",a,b);
getch();
return 0;
}