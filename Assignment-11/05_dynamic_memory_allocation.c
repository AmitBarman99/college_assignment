#include <stdio.h>
#include <stdlib.h>
void main()
{
    int n;
    int *ptr, *p;
    printf("Enter the integer number:\n");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));
    printf("Enter n number of terms here\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
    }
    for (int j = 0; j < n; j++)
    {
        printf("%d\t", ptr[j]);
    }
    printf("\n");
    p = ptr;
    for (int i = 0; i < n; ++i)
    {
        if (ptr[0] < ptr[i])
        {
            ptr[0] = ptr[i];
        }
    }
    printf("Maximum :%d\n", ptr[0]);
    for (int i = 0; i < n; ++i)
    {
        if (ptr[0] > ptr[i])
        {
            ptr[0] = ptr[i];
        }
        if (ptr[0] > p[0])
        {
            ptr[0] = p[0];
        }
    }
    printf("Minimum :%d\n", ptr[0]);
}