//program to find eligibility for vote
#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
printf("Enter a number:");
 scanf("%d",&a);
 if(a>=18)
   printf("\nEligible for vote.");
 else
   printf("\nNot eligible for vote.");
   getch();
   }