//program to input x and y and calculate power
#include<stdio.h>
#include<conio.h>
int main()
{
int x,y,i;
clrscr();
printf("enter x:");
scanf("%d",&x);

printf("enter y:");
scanf("%d",&y);
for(i=1;i<=y;i++)
{
 power = power*x;
 }
 printf("power =%d",power);
 getch();
 return 0;
 }