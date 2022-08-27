#include <stdio.h>
void main()
{
    int arr[10][10], T;
    printf("Enter your 10x10 matrix's elements\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Enter all 10 elements for %d no. rows\n", i + 1);
        for (int j = 0; j < 10; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Enter your key element :\n");
    scanf("%d", &T);
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (arr[i][j] >= T)
            {
                arr[i][j] = 1;
            }
            else
            {
                arr[i][j] = 0;
            }
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}