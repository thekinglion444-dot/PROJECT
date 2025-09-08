#include <stdio.h>
#include <conio.h>

int main()
{
    int num, i;
    clrscr();

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Factors are: ");
    for(i=1; i<=num; i++)
    {
        if(num % i == 0)
            printf("%d ", i);
    }

    getch();
    return 0;
}
