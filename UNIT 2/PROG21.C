//program to accept 10 number and display its value on screen
#include<stdio.h>
#include<conio.h>
void main()
{
int i,num,total=0;
for(i=1;i<=10;i++)
{
 printf("Enter number %d:",i);
 scanf("%d",&num);
 total=total+num;
 }
 printf("Total = %d",total);
 getch();
 }
