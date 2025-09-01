#include <stdio.h>
#include <conio.h>

int main()
{ int i,n ;
clrscr();
 printf("Enter the number of natural number to print:");
 scanf("%d", &n);
 printf("The first %d natural numbers are: \n", n);
 for(i=1;i<=n;i++)
 {
 printf("%d\n", i);
 }
 getch();
 return 0;
 }

