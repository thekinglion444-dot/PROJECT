#include <stdio.h>
#include <conio.h>

int main(){
float dollars, pound, rupees;
clrscr();
printf("Please enter dollar: ");
scanf("%f", &dollars);
rupees=dollars*48;
pound=rupees/70;
printf(" pound : %f", pound);
 getch();
 return 0;
 }
