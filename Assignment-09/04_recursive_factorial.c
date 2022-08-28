#include <stdio.h>
int fact(int n)
{
    if (n == 0)
        return 1;
    return n * fact(n - 1);
}
void main()
{
    int n;
    printf("Enter the given number to get factorial of it :\n");
    scanf("%d", &n);
    printf("The factorial of this number is : %d\n", fact(n));
}