#include <stdio.h>
#include <conio.h>

int main()
{
    int num, i, sum=0;
    clrscr();

    printf("Enter a number: ");
    scanf("%d", &num);

    for(i=1; i<=num/2; i++)
    {
        if(num % i == 0)
            sum = sum + i;
    }

    if(sum == num)
        printf("Perfect Number\n");
    else
        printf("Not Perfect Number\n");

    getch();
    return 0;
}
