#include <stdio.h>
#include <conio.h>

int main()
{
    int num, rev=0, digit, temp;
    clrscr();

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while(num > 0)
    {
        digit = num % 10;
        rev = rev * 10 + digit;
        num = num / 10;
    }

    if(temp == rev)
        printf("Palindrome Number\n");
    else
        printf("Not Palindrome\n");

    getch();
    return 0;
}
