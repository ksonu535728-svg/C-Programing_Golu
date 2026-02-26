#include<stdio.h>
#include<conio.h>

 struct student{
  int id;
  char name[20];
  float marks;

  };
  void main(){
  struct student s1;
  clrscr();
  //Assinging Value
   s1.id=1;
   printf("Enter Name:");
   scanf("%s",s1.name);
   s1.marks=90.8;

   printf("Roll No:%d\n",s1.id);
   printf("Name is: %s\n",s1.name);
   printf("Markse : %f\n",s1.marks);

   getch();
   }
