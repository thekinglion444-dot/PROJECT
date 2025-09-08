#include <stdio.h>
#include <conio.h>

int main()
{
    int num, sum=0, digit, temp;
    clrscr();

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while(num > 0)
    {
        digit = num % 10;
        sum = sum + (digit * digit * digit);
        num = num / 10;
    }

    if(sum == temp)
        printf("Armstrong Number\n");
    else
        printf("Not Armstrong\n");

    getch();
    return 0;
}
