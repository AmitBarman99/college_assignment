#include <stdio.h>
void main()
{
    int i;
    printf("Enter your year : \n");
    scanf("%d", &i);
    if (i % 4 == 0 || i % 400 == 0)
    {
        printf("Your chosen year is a leap year\n");
    }
    else
    {
        printf("Your chosen year is not a leap year\n");
    }
}