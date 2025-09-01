#include <stdio.h>
#include <conio.h>

int main()
{
   int a,b, c;
   clrscr();

 printf("enter the first number:");
 scanf("%d", &a);

 printf("enter the second number:");
 scanf("%d", &b);

 c=a+b;
 printf("sum of %d and %d is:%d\n",a,b, c);
 c=a-b;
 printf("difference of %d and %d is:%d\n",a, b, c);
 c=a*b;
 printf("product of %d and %d is:%d\n",a, b, c);
 c=a/b;
 printf("division of %d and %d is:%d\n",a,b, c);
 getch();
 return 0;
 }

