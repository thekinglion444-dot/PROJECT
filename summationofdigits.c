#include <stdio.h>
#include <conio.h>

int main()
{
    int num, digit, sum=0;
    clrscr();

    printf("Enter a number: ");
    scanf("%d", &num);

    while(num > 0)
    {
        digit = num % 10;
        sum = sum + digit;
        num = num / 10;
    }

    printf("Sum of digits = %d\n", sum);

    getch();
    return 0;
}
