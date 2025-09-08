#include <stdio.h>
#include <conio.h>

int main(){
int length, width, area ,perimeter;
clrscr();
printf("Enter the length of the rectangle: ");
scanf("%d", &length);
printf("enter the width of the rectangle: ");
scanf("%d", &width);
area=length*width;
perimeter=2*(length+width);
printf("area of the rectangle: %d\n", area);
printf("perimeter of the rectangle: %d\n", perimeter);
getch();
return 0;
}
