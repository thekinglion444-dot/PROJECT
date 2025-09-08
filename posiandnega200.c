#include <stdio.h>
#include <conio.h>

int main()
{
    int i, num, pos=0, neg=0, zero=0;
    clrscr();

    for(i=1; i<=200; i++)
    {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        if(num > 0)
            pos++;
        else if(num < 0)
            neg++;
        else
            zero++;
    }

    printf("Positive = %d\n", pos);
    printf("Negative = %d\n", neg);
    printf("Zero = %d\n", zero);

    getch();
    return 0;
}
