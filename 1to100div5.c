#include <stdio.h>
#include <conio.h>

int main()
{
    int i;
    clrscr();

    for(i=1; i<=100; i++)
    {
        if(i % 5 == 0)
            printf("%d ", i);
    }

    getch();
    return 0;
}
