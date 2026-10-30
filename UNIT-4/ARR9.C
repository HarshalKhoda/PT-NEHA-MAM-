//program to find string length with and without string
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
 char str[100];
 int i=0,length;
 clrscr();
 printf("enter a string:");
 scanf("%99s",str);

 length = strlen(str);
 printf("length using strlen() = %d\n",length);
  while(str[i] != '\0')
  {
  i++;
  }
  printf("length without string function = %d\n",i);
  getch();
  return 0;
  }
