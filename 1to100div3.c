#include <stdio.h>
#include <conio.h>

int main()
{
    int i, sum=0;
    clrscr();

    for(i=1; i<=100; i++)
    {
        if(i % 3 == 0)
            sum = sum + i;
    }

    printf("Sum = %d\n", sum);

    getch();
    return 0;
}
