#include <stdio.h>
void main()
{
    float s = 0;
    int n;
    printf("Enter the term upto you want to do summation as S=Sum(1,n) (1/r) : \n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        s = s + (1.0 / i);
    }
    printf("The summation of this seris is (upto %d term) : %f\n", n, s);
}