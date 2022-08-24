#include <stdio.h>
void main()
{
    float firstLen, secondLen, thirdLen;
    printf("Enter the lengths of the triangle :\n");
    scanf("%f\n%f\n%f", &firstLen, &secondLen, &thirdLen);
    if (firstLen > secondLen && firstLen > thirdLen && firstLen < secondLen + thirdLen)
    {
        printf("Yes the triangle can be formed\n");
    }
    else if (secondLen > firstLen && secondLen > thirdLen && secondLen < firstLen + thirdLen)
    {
        printf("Yes the triangle can be formed\n");
    }
    else if (thirdLen > secondLen && thirdLen > firstLen && thirdLen < secondLen + firstLen)
    {
        printf("Yes the triangle can be formed\n");
    }
    else
    {
        printf("NO triangle can not be formed\n");
    }
}