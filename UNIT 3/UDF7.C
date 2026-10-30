//program to find prime or not using udf
#include<stdio.h>
#include<conio.h>
int prime(int num)
{
int count=0,i;
for(i=1;i<=num;i++)
{
if(num%i==0)
count ++;
}
return 0;
}
void main()
{
int num,result;
clrscr();
printf("Enter a number:");
scanf("%d",&num);
result = prime(num);
if(result==0)
 printf("prime number:",num);
else
 printf("not prime number:",num);
 getch();
 }
