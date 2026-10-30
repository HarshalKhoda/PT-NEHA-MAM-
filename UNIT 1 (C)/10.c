#include<stdio.h>
void main()
{
    int F,C;
    printf("ENter Temp in F:%d");
    scanf("%d",&F);
    C = (F-32)*5/9;
    printf("Temp in C:%d",C);
}