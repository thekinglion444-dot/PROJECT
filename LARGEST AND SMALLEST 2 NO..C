#include <stdio.h>
#include <conio.h>

int main(){
int a,b,c,largest,smallest;
printf("Enter first number: ");
scanf("%d", &a);
printf("Enter second number: ");
scanf("%d", &b);
printf("Enter third number: ");
scanf("%d", &c);
if(a>=b && a>=c)
{              largest=a;
}
else if(b>=a && b>=c)
{              largest=b;
}
else
{
largest=c;
}
if(a<=b && a<=c)
{
smallest=a;
}
else if(b<=a && b<=c)
{
smallest=b;
}
else
{
smallest=c;
}
printf("the largest number is: %d\n",largest);
printf("the smallest number is: %d\n",smallest);

getch();
return 0;
}
