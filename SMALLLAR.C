#include <stdio.h>
#include <conio.h>

int main(){
int a,b;
printf("Enter first number: ");
scanf("%d", &a);
printf("Enter second number: ");
scanf("%d", &b);
if(a>b)
{
printf("the largest number is: %d\n",a);
printf("the smallest number is: %d\n",b);
}
else if(b>a)
{
printf("the largest number is %d\n", b);
printf("the smallest number is %d\n", a);
}
else
{
printf("Both are equal: %d\n", a);
}
getch();
return 0;
}