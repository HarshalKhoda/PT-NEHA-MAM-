#include<stdio.h>
#include<conio.h>

void main()
{
int a,b;
clrscr();
printf("ENTER TWO NUMBER");
scanf("%d %df12",&a,&b);
printf("\nADDITION=%d",a+b);
printf("\nSUBTRACTION=%d",a-b);
printf("\nDIVISION=%d",a/b);
printf("\nMULTIPLICATION=%d",a*b);
printf("\nMODULUS=%d",a%b);

getch();
}