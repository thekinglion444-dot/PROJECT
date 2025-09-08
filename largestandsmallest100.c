#include <stdio.h>
#include <conio.h>

int main()
{
    int i, num, largest, smallest;
    clrscr();

    printf("Enter number 1: ");
    scanf("%d", &num);
    largest = smallest = num;

    for(i=2; i<=100; i++)
    {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        if(num > largest)
            largest = num;
        if(num < smallest)
            smallest = num;
    }

    printf("Largest = %d\n", largest);
    printf("Smallest = %d\n", smallest);

    getch();
    return 0;
}
