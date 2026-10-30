//program to find addition of two values using udf
#include<stdio.h>
#include<conio.h>
int addition(int a,int b)
{
int addition;
addition=a+b;
 return a+b;
 }
 void main()
 {
 int a,b,answer;
 clrscr();
 printf("Enter two values:");
 scanf("%d %d",&a,&b);
 answer=addition(a,b);
 printf("addition=%d",answer);
 getch();
 }

