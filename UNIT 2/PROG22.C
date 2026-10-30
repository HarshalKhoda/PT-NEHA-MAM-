//program to input x and y
#include<stdio.h>
#include<conio.h>
void main()
{
int x,y,i;
int power=1;
clrscr();
printf("Enter x:");
scanf("%d",&x);
printf("Enter y:");
scanf("%d",&y);

for(i=1;i<=y;i++)
{
 power=power*x;
 }
 printf("power=%d",power);
 getch();
 }