#include <stdio.h>
#include <math.h>
void main()
{
    float a, b, c, con = 0.0, r1, r2;
    printf(" Enter the value of the three coefficients of your quadratic equation respectively as a , b, c :\n");
    scanf("%f\n%f\n%f", &a, &b, &c);
    con = (b * b) - (4 * a * c);
    if (con > 0)
    {
        r1 = (-b + sqrt(con)) / (2 * a);
        r2 = (-b - sqrt(con)) / (2 * a);
        printf("The roots are %f \t and %f\n", r1, r2);
    }
    else if (con == 0)
    {
        r1 = -b / (2 * a);
        printf("The roots are same and it is %f\n", r1);
    }
    else
    {
        printf("The roots are imaginary\n");
    }
}