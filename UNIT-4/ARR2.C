//program enter n element and find total and average of them
#include<stdio.h>
#include<conio.h>
int main()
{
int a[100],n,i,sum=0;
float avg;
clrscr();
printf("enter numberof elements:");
scanf("%d",&n);
printf("enter elements:\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
sum=sum + a[i];
}
avg = (float)sum/n;
printf("total=%d\n",sum);
printf("average=%.2f\n",avg);
getch();
return 0;
}
