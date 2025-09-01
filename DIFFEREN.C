#include <stdio.h>
#include <conio.h>

int main()
{
 int a,b, diff;

 clrscr();

 printf("enter the first number:");
 scanf("%d", &a);

 printf("enter the second number:");
 scanf("%d", &b);

 diff=a-b;
 printf("DIFFERENCE of %d and %d is:%d\n",a, b, diff);

 getch();
 return 0;
 }


