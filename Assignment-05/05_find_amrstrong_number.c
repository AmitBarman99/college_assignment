#include <stdio.h>
void main()
{
    int low, high, r, sum, temp;
    printf("Enter starting number of range: ");
    scanf("%d", &low);
    printf("Enter ending number of range : ");
    scanf("%d", &high);
    printf("Armstrong numbers in given range are:\n ");
    for (int i = low; i <= high; i++)
    {
        temp = i;
        sum = 0;
        while (temp != 0)
        {
            r = temp % 10;
            temp = temp / 10;
            sum = sum + (r * r * r);
        }
        if (sum == i)
            printf("%d\n ", i);
    }
    // printf("\n");
}