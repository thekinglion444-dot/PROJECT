#include <stdio.h>
#include <conio.h>

int main(){
int netsal,grossal,allowance,deduction;
printf("Enter your gross salary: ");
scanf("%d", &grossal);
if(grossal>10000)
{              allowance=(10*grossal)/100;
	       deduction=(3*grossal)/100;
}
else if(grossal>5000)
{              allowance=(7*grossal)/100;
	       deduction=(2*grossal)/100;
}
else
{
	       allowance=0;
	       deduction=0;
}
netsal=grossal+allowance-deduction;
printf("Your net salary is: %d\n", netsal);
getch();
return 0;
}