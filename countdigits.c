#include <stdio.h>
#include <conio.h>

int main()
{
    int num, count=0;
    clrscr();

    printf("Enter a number: ");
    scanf("%d", &num);

    while(num > 0)
    {
        count++;
        num = num / 10;
    }

    printf("Total digits = %d\n", count);

    getch();
    return 0;
}
