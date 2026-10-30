//program to find sum of digit
#include<stdio.h>
#include<conio.h>
void main()
{
int num,digit,sum=0;
clrscr();
printf("Enter number:");
scanf("%d",&num);
while(num>0)
{
 digit=num%10;
 sum=sum+digit;
 num=num/10;
 }

 printf("sum of digits=%d",sum);
 getch();
 }