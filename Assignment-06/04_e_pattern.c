#include <stdio.h>
void main()
{
    int n;
    char c = 'A';
    printf("Enter your rows number of the pattern :\n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= i; j--)
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf("%c ", c + k - 1);
        }
        printf("\n");
    }
}