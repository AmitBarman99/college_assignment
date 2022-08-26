// Populate Array in a given order

#include <stdio.h>
void main()
{
    int a[10], b[10], c[10];
    printf("Enter the 10 elements of the array A :\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Entere the 10 elements of the array B :\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &b[i]);
    }
    printf("The 10 elements of the array C are : \n");
    for (int i = 0; i < 10; i++)
    {
        c[i] = a[i] + b[9 - i];
        printf("%d ", c[i]);
    }
    printf("\n");
}