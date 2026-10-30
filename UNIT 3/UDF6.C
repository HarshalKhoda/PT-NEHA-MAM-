//program to find out armstrong or not using udf
#include<stdio.h>
#include<conio.h>
int armstrong(int n)
{
int digit,sum=0;
while(n>0)
{
digit=n%10;
sum=sum+digit*digit*digit;
n=n/10;
}
return sum;
}
void main()
{
int sum,answer,n;
clrscr();
printf("Enter a number:");
 scanf("%d",&sum);
  answer=armstrong(n);

 if(answer==sum)
  printf("Number is armstrong:");
 else
  printf("Number is not armstrong:");
  getch();
  }