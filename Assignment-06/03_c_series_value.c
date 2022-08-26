#include <stdio.h>
#include <math.h>
void main()
{
    int n, sum = 0;
    printf("Enter your terms number of the series ;\n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        sum = sum + pow(2 * i + 1, i + 1);
    }
    printf("The solution of the series S=1^1+3^2+5^3.....n terms is : %d\n", sum);
}