//program to find reverse using udf
#include<stdio.h>
#include<conio.h>
int reverse(int num)
{
int digit,reverse=0;
while(num>0)

{
digit=num%10;
reverse=reverse*10+digit;
num=num/10;
}
return reverse;
}
void main()
{
int num,answer;
clrscr();
printf("Enter number:");
scanf("%d",&num);
 answer=reverse(num);
 printf("answer=%d",answer);
 getch();
 }