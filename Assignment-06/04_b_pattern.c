#include <stdio.h>
void main()
{
    int n;
    printf("Enter your rows no. of the patterns :\n");
    scanf("%d", &n);
    printf("The patterns start from here \n");
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j % 2);
        }
        printf("\n");
    }
}