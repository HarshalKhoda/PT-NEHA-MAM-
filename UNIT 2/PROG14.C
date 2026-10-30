//program to find number is equal or not
#include<stdio.h>
#include<conio.h>
void main()
{
int num1,num2;
clrscr();
printf("Enter first number:");
scanf("%d",&num1);
printf("Enter second number:");
scanf("%d",&num2);
if(num1!=num2)
printf("\nNumber is not equal:");
else
printf("\nNumber is eqal:");
getch();
}