#include <stdio.h>
#include <conio.h>

int main()
{
 int a,b, sum;

 clrscr();

 printf("enter the first number:");
 scanf("%d", &a);

 printf("enter the second number");
 scanf("%d", &b);

 sum=a+b;
 printf("sum of %d and %d is:%d\n",a, b, sum);

 getch();
 return 0;
 }

