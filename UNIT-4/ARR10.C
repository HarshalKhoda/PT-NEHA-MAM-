//program to check a string is palindrome
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
//clrscr();
char str[100];
int i,length,flag=1;

 printf("enter a string:");
 scanf("%s",str);

 length = strlen(str);

 for(i=0; i<length/2;i++)
 {
  if(str[i] != str[length - 1-i])
  {
  flag = 0;
  break;
  }
}
if(flag == 1)
 printf("string is palindrome.");
else
 printf("string is not palindrome.");
 getch();
 return 0;
 }