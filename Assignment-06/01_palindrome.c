#include <stdio.h>
void main()
{
    int i, sum = 0, r, n;
    printf("Enter your choosen number :\n");
    scanf("%d", &n);
    i = n;
    while (n > 0)
    {
        r = n % 10;
        sum = sum * 10 + r;
        n = n / 10;
    }
    if (i == sum)
    {
        printf("It is a palindrome number\n");
    }
    else
    {
        printf("It is not a palindrome number\n");
    }
}