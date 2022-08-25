#include <stdio.h>
void main()
{
    long int s = 0;
    int n, sign = 1;
    printf("Enter the term upto you want to get the summation: \n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        s = s + sign * i;
        sign = sign * (-1);
    }
    printf("The summation is : \t %ld\n", s);
}