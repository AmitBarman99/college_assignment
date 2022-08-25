#include <stdio.h>
void main()
{
    int x, n, i;
    printf("Enter your value of x and n respectively\n");
    scanf("%d\n%d", &x, &n);
    i = x;
    while (n > 1)
    {
        x = x * i;
        n--;
    }
    printf("Your result is : %d\n", x);
}