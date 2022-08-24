#include <stdio.h>
void main()
{
    char c;
    printf("Enter a charecter :\n");
    scanf("%c", &c);
    if (c >= 'A' && c <= 'Z')
    {
        printf("It is a Capital letter\n");
    }
    else if (c >= 'a' && c <= 'z')
    {
        printf("It is a Small letter\n");
    }
    else if (c >= '0' && c <= '9')
    {
        printf("It is a digits\n");
    }
    else
    {
        printf("It is special character\n");
    }
}