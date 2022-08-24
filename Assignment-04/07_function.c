#include <stdio.h>
void main()
{
    int x, fx = 0;
    printf("Enter a number to realize the following function :\n");
    scanf("%d", &x);
    if (x > 50)
    {
        fx = 6 * x + 1;
        printf("Your following function is f(x)= 6x +1 and the result is : %d\n", fx);
    }
    else if (x >= 30 && x <= 50)
    {
        fx = 2 * (x * x) + 3;
        printf("Your following function is f(x) = 2x^2 +3 and the result is : %d\n", fx);
    }
    else if (x >= 1 && x <= 29)
    {
        fx = 5 * (x * x * x) - 6;
        printf("Your following function is f(x) = 5x^3 6 and the result is : %d\n", fx);
    }
    else
    {
        printf("Your following function is f(x)=0 and the result is also : 0\n");
    }
}