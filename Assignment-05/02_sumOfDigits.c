#include <stdio.h>
void main()
{
    int n, sum = 0, r;
    printf("Enter your number to perform the summation of the digits: \n");
    scanf("%d", &n);
    while (n > 0)
    {
        r = n % 10;
        sum = sum + r;
        n = n / 10;
    }
    printf("Your sum of the digits is : %d\n", sum);
}