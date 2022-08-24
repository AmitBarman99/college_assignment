#include <stdio.h>
void main()
{
    int a, b, c, lar = 0;
    printf("Enter three integer to get largest number :\n");
    scanf("%d\n%d\n%d", &a, &b, &c);
    lar = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    printf("%d is the largest number\n", lar);
}