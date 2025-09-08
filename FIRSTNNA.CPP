#include <stdio.h>
#include <conio.h>

int main(){
int n,i;
clrscr();
printf("Enter the number till where you want to print: ");
scanf("%d", &n);
for(i=1;i<=10;i++)
{
printf("%d\n",i);
}
getch();
return 0;
}