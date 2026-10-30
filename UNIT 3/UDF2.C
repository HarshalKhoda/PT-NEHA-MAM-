//program to find factorial using udf
#include<stdio.h>
#include<conio.h>
int factorial(int num)
{
int i;
int factorial=1;
for(i=1;i<=num;i++)
 {
 factorial=factorial*i;
 }
 return factorial;
 }
 void main()
 {
 int num,answer;
 clrscr();
 printf("Enter a number:");
 scanf("%d",&num);
 answer=factorial(num);
 printf("answer=%d",answer);
 getch();
 }

