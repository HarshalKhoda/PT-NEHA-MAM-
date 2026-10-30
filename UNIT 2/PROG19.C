//program to print series
#include<stdio.h>
#include<conio.h>
void main()
{
int n,i;
int a=0,b=1,c;
clrscr();
printf("Enter the number of terms:");
scanf("%d",&n);
printf("%d%d",a,b);

for(i=3;i<=n;i++)
{
 c=a+b;
 printf("%d",c);
 a=b;
 b=c;
 }
 getch();
 }