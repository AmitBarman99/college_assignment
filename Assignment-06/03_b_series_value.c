#include <stdio.h>
#include <math.h>
void main()
{
    int n, sum = 0;
    printf("Enter your term of the series :\n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum = sum + pow(i, 2);
    }
    printf("The solution of the series S=1+4+9+16.....n terms is : %d\n", sum);
}