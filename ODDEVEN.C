#include<stdio.h>
#include<conio.h>
void main(){
int n,i, arr[100],even[100],odd[100];
int e=0,o=0;
clrscr();
printf("Enter number of elemant in arry:");
scanf("%d",&n);
printf ("Enter%d elemants:\n",n);
for(i=0;i<n;i++){
scanf("%d",&arr[i]);
}
for (i=0;i<n;i++)
{
if(arr[i]%2==0){
even[e++]=arr[i];
}
else {
odd [o++]=arr[i];
}
}
printf("\n even elemants: ");
for(i=0;i<e;i++)
{
printf("%d ",even [i]);
}
printf("\n odd elemants: ");
for (i=0; i<o;i++)
{
printf("%d ",odd[i]);
}
printf("\n");
getch();
}