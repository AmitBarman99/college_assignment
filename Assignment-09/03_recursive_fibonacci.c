#include <stdio.h>
int fibonacci(int n)
{
    if (n == 0 || n == 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}
void main()
{
    int n;
    printf("Enter the number upto you want to get fibonacci series :\n");
    scanf("%d", &n);
    printf("The fibonacci series is :\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
}