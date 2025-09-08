#include <stdio.h>
#include <conio.h>

int main(){
float netsal,grosssal,allowance,deduction;
clrscr();
printf("Enter your gross salary: ");
scanf("%f", &grosssal);
allowance=(10*grosssal)/100;
deduction=(3*grosssal)/100;
netsal=grosssal+allowance-deduction;
printf("your net salary is : %f\n", netsal);
getch();
return 0;
}