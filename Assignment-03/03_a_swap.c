#include <stdio.h>
void main()
{
    int a, b, c;
    printf("Enter two as a and b number :\n");
    scanf("%d\n%d", &a, &b);
    printf("The value a and b are : %d\t%d\n", a, b);
    c = a + b;
    a = c - a;
    b = c - b;
    printf("After swap, the value of a and b are : %d\t%d\n", a, b);
}