#include <stdio.h>
#include <conio.h>

int main()
{
 int a,b, product;

 clrscr();

 printf("enter the first number:");
 scanf("%d", &a);

 printf("enter the second number:");
 scanf("%d", &b);

 product=a*b;
 printf("PRODUCT of %d and %d is:%d\n",a, b, product);

 getch();
 return 0;
 }

