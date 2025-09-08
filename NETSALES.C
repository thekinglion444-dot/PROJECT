#include <stdio.h>
#include <conio.h>

int main(){
float netsal,grosssal,discount;
clrscr();
printf("Enter your gross sale: ");
scanf("%f", &grosssal);
discount=(10*grosssal)/100;
netsal=grosssal-discount;
printf("your net sale is : %f\n", netsal);
getch();
return 0;
}