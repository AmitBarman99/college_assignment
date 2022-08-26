#include <stdio.h>
void main()
{
    int sum, l = 0, h = 1, n;
    printf("Enter your turms number of the fibonacci series :\n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", l);
        sum = l + h;
        l = h;
        h = sum;
    }
    printf("\n");
}