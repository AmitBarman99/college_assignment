#include <stdio.h>
#include <stdlib.h>
struct complex
{
    int r, i;
};
void main()
{
    int n, *p, real = 0, im = 0;
    printf("Integer no. :\n");
    scanf("%d", &n);
    p = (int *)malloc((n + 1) * sizeof(int));
    struct complex c[n + 1];
    for (int i = 0; i < n; i++)
    {
        printf("Enter real and imaginary part of complex no - %d\n", i + 1);
        scanf("%d%d", &c[i].r, &c[i].i);
    }
    for (int i = 0; i < n; i++)
    {
        real = real + c[i].r;
        im = im + c[i].i;
    }
    c[n].r = real;
    c[n].i = im;
    printf("all the complex number is here\n");
    for (int j = 0; j < n + 1; j++)
    {
        printf("%d + i%d\n", c[j].r, c[j].i);
    }
}