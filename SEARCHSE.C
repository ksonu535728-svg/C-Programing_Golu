#include<stdio.h>
#include<string.h>
#include<conio.h>
  int main(){
  char a[5][20],search[20];
  int i;
  clrscr();

  for(i=0;i<5; i++){
  printf("Enter Name::");
  scanf("%s",a[i]);

  }
  printf("Enter Word to SEarch:");
  scanf("%s",search);
  for(i=0; i<5; i++){

  if(strcmp (a[i],search)==0){
  printf("Found At Posistion %d\n",i+1);
  getch();
  return 0;


  }
  }
    printf("\nNot Found:");
   getch();
    return 0;
   }