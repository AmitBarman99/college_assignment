//here one number is even and one is odd

#include <stdio.h>
void main()
{
    int num1, num2;
    float avg = 0, sum = 0;
    printf("Enter a even number :\n");
    scanf("%d", &num1);
    printf("Enter a odd number :\n");
    scanf("%d", &num2);
    sum = num1 + num2;
    avg = sum / 2;
    printf("The sum of these number is : %f\n And the average of these two number is : %f\n",sum,avg);
}