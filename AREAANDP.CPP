#include <stdio.h>
#include <conio.h>

int main(){
float side, area ,perimeter;
clrscr();
printf("Enter the length of the side of square: ");
scanf("%f", &side);
area=side*side;
perimeter=4*side;
printf("area of the square: %f\n", area);
printf("perimeter of the square: %f\n", perimeter);
getch();
return 0;
}