#include <stdio.h>
#include <conio.h>

int main()
{
    float minutes, hours;
    clrscr();

    printf("Enter time in minutes: ");
    scanf("%f", &minutes);

    hours = minutes / 60;
    printf("Hours = %.2f\n", hours);

    getch();
    return 0;
}
