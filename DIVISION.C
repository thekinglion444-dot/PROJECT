#include <stdio.h>
#include <conio.h>

int main()
{
   int a,b, division;
   clrscr();

 printf("enter the first number:");
 scanf("%d", &a);

 printf("enter the second number:");
 scanf("%d", &b);

 division=a/b;
 printf("DIVISION of %d and %d is:%d\n",a,b, division);
 getch();
 return 0;
 }

