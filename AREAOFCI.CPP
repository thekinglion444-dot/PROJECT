#include <stdio.h>
#include <conio.h>

int main(){
float radius, area;
const float PI=3.1415;
clrscr();
printf("Enter the radius of the circle: ");
scanf("%f", &radius);
area= PI*radius*radius;
printf("area of the circle is: %f\n", area);
getch();
return 0;
}