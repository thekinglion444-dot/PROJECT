#include <stdio.h>
#include <conio.h>

int main()
{
    int num, i, flag=0;
    clrscr();

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num <= 1)
        printf("Not Prime\n");
    else
    {
        for(i=2; i<=num/2; i++)
        {
            if(num % i == 0)
            {
                flag = 1;
                break;
            }
        }

        if(flag == 0)
            printf("Prime Number\n");
        else
            printf("Not Prime\n");
    }

    getch();
    return 0;
}
