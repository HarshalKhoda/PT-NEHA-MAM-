#include<stdio.h>
#include<conio.h>
void main()
{
float p,r,t,si;
clrscr();
printf("\nENTER PRINCIPLE AMMOUNT:");
scanf("%f",&p);
printf("\nENTER RATE OF INTREST:");
scanf("%f",&r);
printf("\nENTER NUMBER OF YEARS:");
scanf("%f",&t);
si=(p*r*t)/100;
printf("\nSIMPLE INTREST=%f:",si);
getch();
}
