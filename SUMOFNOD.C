#include <stdio.h>
#include <conio.h>

int main(){
int n,i,sum=0;
clrscr();
printf("Enter the number till where you want to print: ");
scanf("%d", &n);
for(i=1;i<=n;i++)
{            sum=sum+(2*i)-1;
}
printf("Sum of the first %d natural number is: %d\n", n, sum);
getch();
return 0;
}