#include <stdio.h>
#include <math.h>
void main()
{
    int first_side, second_side, third_side;
    float s, area, a, b, c;
    printf("Please enter the length of the side of the triangle\n");
    scanf("%d\n%d\n%d", &first_side, &second_side, &third_side);
    s = (first_side + second_side + third_side) / 2;
    a = s - first_side;
    b = s - second_side;
    c = s - third_side;
    area = sqrt(s * a * b * c);
    printf("The of a,b,c,s are : %f\t%f\t%f\t%f\n", a, b, c, s);
    printf("The Area of the Triangle is : %f\n", area);
}