#include <stdio.h>
void main()
{
    int n, arr[100], temp;
    printf("Enter the elements number of your array :\n");
    scanf("%d", &n);
    printf("Enter the elements of your array :\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("After bubble sort your array will be :\n");
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < (n - i - 1); j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int k = 0; k < n; k++)
    {
        printf("%d ", arr[k]);
    }
    printf("\n");
}