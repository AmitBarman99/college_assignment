#include <stdio.h>
int trans(int mat[100][100], int m, int n)
{
    int transpose[100][100];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            transpose[j][i] = mat[i][j];
        }
    }
    printf("After transposing the matrix will be :\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}
void main()
{
    int k;
    printf("Menu lists :\n\n");
    printf("1. Transpose of a matrix\n2. Addition of two matrix\n3. Multiplication of two matrix\n\n");
    printf("Enter a key to perform \n");
    scanf("%d", &k);
    int m, n, p, q, mat1[100][100], mat2[100][100], mul[100][100];
    switch (k)
    {
    case 1:
        printf("You select Transpose of a matrix\nEnter the rows and colume no. of your matrix\n");
        scanf("%d%d", &m, &n);
        printf("Enter your matrix's elements :\n");
        for (int i = 0; i < m; i++)
        {
            printf("\n");
            for (int j = 0; j < n; j++)
            {
                scanf("%d", &mat1[i][j]);
            }
        }
        printf("Your matrix is :\n");
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                printf("%d ", mat1[i][j]);
            }
            printf("\n");
        }
        trans(mat1, m, n);
        break;
    case 2:
        printf("You select Addition of two matrix\n Enter the rows and colume no. of the matrixs :\n");
        scanf("%d%d", &p, &q);
        printf("Enter your 1st matrix's elements ;\n");
        for (int i = 0; i < p; i++)
        {
            printf("\n");
            for (int j = 0; j < q; j++)
            {
                scanf("%d", &mat1[i][j]);
            }
        }
        printf("Enter your 2nd matrix's elements :\n");
        for (int i = 0; i < p; i++)
        {
            printf("\n");
            for (int j = 0; j < q; j++)
            {
                scanf("%d", &mat2[i][j]);
            }
        }
        printf("After addition your matrix will be :\n");
        for (int i = 0; i < p; i++)
        {
            for (int j = 0; j < q; j++)
            {
                printf("%d ", mat1[i][j] + mat2[i][j]);
            }
            printf("\n");
        }
        break;
    case 3:
        printf("You select Multiplication of two matrix\n Enter 1st matrix rows and colume no. and 2nd matrix's colume no :\n");
        scanf("%d%d%d", &m, &n, &q);
        printf("Enter your 1st matrix's elements :\n");
        for (int i = 0; i < m; i++)
        {
            printf("\n");
            for (int j = 0; j < n; j++)
            {
                scanf("%d", &mat1[i][j]);
            }
        }
        printf("Enter your 2nd matrix's elements :\n");
        for (int i = 0; i < n; i++)
        {
            printf("\n");
            for (int j = 0; j < q; j++)
            {
                scanf("%d", &mat2[i][j]);
            }
        }
        printf("After Multiplication your matrix will be :\n");
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                mul[i][j] = 0;
                for (int k = 0; k < q; k++)
                {
                    mul[i][j] += mat1[i][j] * mat2[i][j];
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < q; j++)
            {
                printf("%d ", mul[i][j]);
            }
            printf("\n");
        }
        break;
    default:
        printf("Enter correct value, You Enter a wrong value\n");
        break;
    }
}