#include <stdio.h>
typedef struct complex
{
    int r;
    int i;
} com;
void sum_com(com *c1, com *c2, com *z)
{
    z->r = c1->r + c2->r;
    z->i = c1->i + c2->i;
}
void main()
{
    struct complex c1, c2, sum;
    printf("Enter the first complex number's real part and imaginary part \n");
    scanf("%d%d", &c1.r, &c1.i);
    printf("Enter the second complex number's real and imaginary part \n");
    scanf("%d%d", &c2.r, &c2.i);
    sum_com(&c1, &c2, &sum);
    printf("The sum of these two complex number is : %d + i%d\n", sum.r, sum.i);
}