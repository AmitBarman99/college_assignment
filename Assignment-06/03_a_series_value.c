#include <stdio.h>
void main()
{
    int n, fact = 1, s = 0;
    printf("Enter the terms number :\n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
        s = s + fact;
    }
    printf("The solution of the series S= 1!+2!+3!....+n! is : %d\n", s);
}