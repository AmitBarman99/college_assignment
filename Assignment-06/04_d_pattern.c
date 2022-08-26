#include <stdio.h>
void main()
{
    int n;
    printf("Enter the rows no. of the pattern :\n");
    scanf("%d", &n);
    printf("The pattern start from here :\n");
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}