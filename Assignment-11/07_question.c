#include <stdio.h>
#include <stdlib.h>
void main()
{
    int m, n, count;
    printf("Enter the rows and colomns number :\n");
    scanf("%d%d", &m, &n);
    int(*arr)[m][n] = malloc(sizeof *arr);
    int *p;
    p = (int *)malloc(m * sizeof(int));
    count = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            (*arr)[i][j] = ++count;
        }
    }
    printf("Matrix\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", (*arr)[i][j]);
        }
        printf("\n");
    }
    printf("Base address matrix is :\n");
    for (int k = 0; k < m; k++)
    {
        p[k] = &(*arr)[k];
        printf("%d ", p[k]);
    }
    printf("\n");
}