#include <stdio.h>
struct complex
{
    int r;
    int i;
};
struct complex sum_com(struct complex c1, struct complex c2)
{
    struct complex z;
    z.r = c1.r + c2.r;
    z.i = c1.i + c2.i;
    return z;
}
void main()
{
    struct complex c1, c2, sum;
    printf("Enter the first complex number's real part and imaginary part \n");
    scanf("%d%d", &c1.r, &c1.i);
    printf("Enter the second complex number's real and imaginary part \n");
    scanf("%d%d", &c2.r, &c2.i);
    sum = sum_com(c1, c2);
    printf("The sum of these two complex number is : %d + i%d\n", sum.r, sum.i);
}