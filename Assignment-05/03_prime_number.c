#include <stdio.h>
void main()
{
    int x, n;
    printf("Enter a number to check prime or not :\n");
    scanf("%d", &x);
    for (int n = 2; n < x; n++)
    {
        if (x % n == 0)
        {
            printf("It is a not prime number\n");
            break;
        }
        else
        {
            printf("It is a prime number\n");
            break;
        }
    }
}