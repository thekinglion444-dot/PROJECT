#include <stdio.h>
#include <conio.h>

int main()
{
    int i, boys=0, girls=0;
    char sex;
    clrscr();

    for(i=1; i<=50; i++)
    {
        printf("Enter sex of student %d (B/G): ", i);
        scanf(" %c", &sex);

        if(sex=='B' || sex=='b')
            boys++;
        else if(sex=='G' || sex=='g')
            girls++;
    }

    printf("Boys = %d\n", boys);
    printf("Girls = %d\n", girls);

    getch();
    return 0;
}
