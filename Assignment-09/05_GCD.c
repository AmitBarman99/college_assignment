#include <stdio.h>
int gcd(int n1, int n2)
{
    if (n2 != 0)
        return gcd(n2, n1 % n2);
    else
        return n1;
}
void main()
{
    int m, n;
    printf("Emter the numbers to find GCD of it :\n");
    scanf("%d%d", &m, &n);
    printf("The GCD of these two number is : %d\n", gcd(m, n));
}