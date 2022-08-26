#include <stdio.h>
void main()
{
    int n, k = 0;
    printf("Enter your rows no. of your pattern :\n");
    scanf("%d", &n);
    printf("The pattern start from here :\n");
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", k + 1);
            k++;
        }
        printf("\n");
    }
}