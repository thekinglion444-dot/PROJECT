#include <stdio.h>
#include <conio.h>

int main()
{
    int i, j, flag, count=0;
    clrscr();

    for(i=2; i<=500; i++)
    {
        flag = 0;
        for(j=2; j<=i/2; j++)
        {
            if(i % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if(flag == 0)
            count++;
    }

    printf("Total prime numbers between 1 and 500 = %d\n", count);

    getch();
    return 0;
}
