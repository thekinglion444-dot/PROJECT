#include <stdio.h>
#include <conio.h>

int main(){
float celcius,farenheit;
clrscr();
printf("Enter the temperature in celsius: ");
scanf("%f", &celcius);
farenheit=(celcius*9/5)+32;
printf("%f celsius is equal to %f farenheit. \n", celcius, farenheit);
getch();
return 0;
}