//program to find palindrome or not using udf
#include<stdio.h>
#include<conio.h>
int palindrome(int n)
{
int digit,reverse=0;
while(n>0)
{
 digit=n%10;
 reverse=reverse*10+digit;
 n=n/10;
 }
 return reverse;
 }
 void main()
 {
 int num,reverse;
 clrscr();
 printf("enter a number:");
 scanf("%d",&num);
 reverse=palindrome(num);
 if(num==reverse)
  printf("Number is palindrome:");
 else
  printf("Number is not palindrome:");
  getch();
  }