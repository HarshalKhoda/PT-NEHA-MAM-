//program to copy element of one array into another
#include<stdio.h>
#include<conio.h>
int main()
{

 int a[100],b[100],n,i;
 clrscr();
 printf("enter number of elements:");
 scanf("%d",&n);
 printf("enter elements:\n");
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
   b[i] = a[i];
   }
   printf("copied array is:\n");
   for(i=0;i<n;i++)
   {
   printf("%d",b[i]);
   }
   getch();
   return 0;
  }
