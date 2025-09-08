#include <stdio.h>
#include <conio.h>

int main(){
float netsal,grossal,discount;
printf("Enter your gross salary: ");
scanf("%f", &grossal);
if(grossal>20000)
{
	       discount=(15*grossal)/100;
}
else if(grossal>10000)
{
	       discount=(10*grossal)/100;
}
else
{
	       discount=(5*grossal)/100;
}
netsal=grossal-discount;
printf("Your net salary is: %f\n", netsal);
getch();
return 0;
}