
//program to check whether number is pelindrom
#include<stdio.h>
#include<conio.h>
void main()
{
int num,original,digit,reverse=0;
printf("Enter number:");
scanf("%d",&num);
original=num;

while(num>0)
{
digit=num%10;
reverse=reverse*10+digit;
num=num/10;
}
if(original==reverse)
 printf("number is palindrome");
 else
 printf("number is not palindrome");
 getch();
 }
