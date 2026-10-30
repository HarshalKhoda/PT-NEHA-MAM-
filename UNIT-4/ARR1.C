//program to enter N elements and print
#include<stdio.h>
#include<conio.h>
int main()
{
clrscr();
int a[100],n,i;
printf("enter number of elements:\n");
scanf("%d",&n);
printf("enter elements:\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("array elements are: \n");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}

getch();
return 0;
}
