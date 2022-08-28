#include <stdio.h>
float product(int x, float y)
{
    return x * 1.0 * y;
}
void main()
{
    int a;
    float b, pro;
    printf("Enter the integer and float number respectively\n");
    scanf("%d%f", &a, &b);
    pro = product(a, b);
    printf("The product of these two number is : %f\n", pro);
}