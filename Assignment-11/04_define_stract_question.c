#include <stdio.h>
struct complex
{
    int r;
    int i;
};
struct number
{
    struct complex comp;
    int real;
};
struct number sum_com(struct number n1, struct number n2)
{
    struct number z;
    z.comp.r = n1.comp.r + n2.comp.r;
    z.comp.i = n1.comp.i + n2.comp.i;
    return z;
}
void main()
{
    struct number n1, n2, sum;
    printf("Enter the first complex number's real part and imaginary part \n");
    scanf("%d%d", &n1.comp.r, &n1.comp.i);
    printf("Enter the second complex number's real and imaginary part \n");
    scanf("%d%d", &n2.comp.r, &n2.comp.i);
    sum = sum_com(n1, n2);
    printf("The sum of these two complex number is : %d + i%d\n",
           sum.comp.r, sum.comp.i);
}