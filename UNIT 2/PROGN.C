//program to find 1 to n odd number
#include<stdio.h>
#include<conio.h>
int main()
{
int i,n;
clrscr();
printf("enter n:");
scanf("%d",&n);
for(i=1;i<=n;i=i+2)
{
printf("\n%d",i);
}
getch();
return 0;
}