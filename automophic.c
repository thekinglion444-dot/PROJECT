#include <stdio.h>
#include <conio.h>

int main()
{
    int num, square, temp, pow=1;
    clrscr();

    printf("Enter a number: ");
    scanf("%d", &num);

    square = num * num;
    temp = num;

    while(temp > 0)
    {
        pow = pow * 10;
        temp = temp / 10;
    }

    if(square % pow == num)
        printf("Automorphic Number\n");
    else
        printf("Not Automorphic\n");

    getch();
    return 0;
}
