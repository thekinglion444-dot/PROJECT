#include <stdio.h>
#include <conio.h>

int main()
{
    int num, rev=0, digit;
    clrscr();

    printf("Enter a number: ");
    scanf("%d", &num);

    while(num > 0)
    {
        digit = num % 10;
        rev = rev * 10 + digit;
        num = num / 10;
    }

    printf("Reverse = %d\n", rev);

    getch();
    return 0;
}
