#include <stdio.h>
void main()
{
    int num1, num2, num3;
    printf("Enter your chosen three number :\n");
    scanf("%d\n%d\n%d", &num1, &num2, &num3);
    if (num1 > num2 && num1 > num3)
    {
        printf("%d is the largest number among these three number\n", num1);
    }
    else if (num2 > num1 && num2 > num3)
    {
        printf("%d is the largest number\n", num2);
    }
    else if (num3 > num1 && num3 > num2)
    {
        printf("%d is the largest number\n", num3);
    }
    else if (num1 = num2 = num3)
    {
        printf("The three number are same\n");
    }
    else if (num1 = num2 && num1 > num3)
    {
        printf("Your first and second value is the same and %d is the largest\n", num1);
    }
    else if (num2 = num3 && num2 > num1)
    {
        printf("Your second and third value is same and %d is the largest\n", num2);
    }
    else if (num1 = num3 && num1 > num2)
    {
        printf("Your first and third value is same and %d is the largest\n", num3);
    }
    else
    {
        printf("Something is wrong\n");
    }
}