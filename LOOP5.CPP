#include <stdio.h>
#include <conio.h>

int main()
{ int i,n ;
clrscr();
 printf("Enter the number of odd number to print:");
 scanf("%d", &n);
 printf("The first %d odd numbers are: \n", n);
 for(i=1;i<=n;i++)
 {
 printf("%d\n", 2*i-1);
 }
 getch();
 return 0;
 }

