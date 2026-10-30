#include<stdio.h>
#include<conio.h>
int main()
{
int i,n,sum=0;
clrscr();
for(i=1;i<=10;i++)
{
printf("enter a number:");
scanf("%d",&n);
sum = sum +n;
}
printf("total=%d",sum);
getch();
return 0;
}