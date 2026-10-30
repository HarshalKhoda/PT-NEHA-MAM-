//program to find sum using udf
#include<stdio.h>
#include<conio.h>
int sum(int num)
{
 int digit,sum=0;
 while(num>0)
{
 digit=num%10;
 sum=sum+digit;
 num=num/10;
 }
 return sum;
 }
 void main()
 {
 int num,answer;
 clrscr();
 printf("Enter a number:");
 scanf("%d",&num);
answer= sum(num);
 printf("answer=%d",answer);
 getch();
 }