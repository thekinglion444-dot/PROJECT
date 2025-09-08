#include <stdio.h>
#include <conio.h>

int main(){
float celcius,farenheit;
clrscr();
printf("Enter the temperature in farenheit: ");
scanf("%f", &farenheit);
celcius=(farenheit-32)*5/9;
printf("%f farenheit is equal to %f celsius. \n",farenheit, celcius);
getch();
return 0;
}
