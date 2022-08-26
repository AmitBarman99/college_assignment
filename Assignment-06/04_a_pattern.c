#include <stdio.h>
void main()
{
    int n;
    printf("Enter the rows number of the patterns :\n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j < n; j++)
        {
            printf(" ");
        }
        for (int k = 1; k < (i * 2); k++)
        {
            printf("%d", k);
        }
        printf("\n");
    }
}