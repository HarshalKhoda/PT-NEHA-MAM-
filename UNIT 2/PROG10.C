//program to convert temperature from fahrenheit to celsius
#include<stdio.h>
#include<conio.h>
void main()
{
float fahrenheit,celsius;
clrscr();
printf("Enter temperature in fahrenheit:");
scanf("%f",&fahrenheit);
celsius=(fahrenheit-32)*5/9;
printf("\nTemperature in celsius=%.2f",celsius);
getch();
}