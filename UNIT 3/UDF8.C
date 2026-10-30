//program to find fibonacci series using udf
#include<stdio.h>
#include<conio.h>
int fibonacci(int n)
{
int a=0,b=1,c,i;
for(i=1;i<=n;i++)
{
c=a+b;
a=b;
b=c;
}
return c;
}
void main()
{
int n,answer;
clrscr();
printf("Enter number :");
scanf("%d",&n);
answer = fibonacci(n);
printf("fibonacci=%d",answer);
getch();
 }