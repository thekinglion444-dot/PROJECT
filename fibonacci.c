#include <stdio.h>
#include <conio.h>

int main()
{
    int n, i, a=0, b=1, c;
    clrscr();

    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for(i=1; i<=n; i++)
    {
        printf("%d ", b);
        c = a + b;
        a = b;
        b = c;
    }

    getch();
    return 0;
}
