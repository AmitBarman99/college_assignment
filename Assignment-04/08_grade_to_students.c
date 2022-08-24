#include <stdio.h>
void main()
{
    int m1, m2, m3;
    float per = 0;
    printf("Enter the marks of the student in three subjects respectively : \n");
    scanf("%d\n%d\n%d", &m1, &m2, &m3);
    per = (m1 + m2 + m3) / 3;
    if (per >= 60)
    {
        printf("The student got a 1st division marks with a percentance of %f \n", per);
    }
    else if (per < 60 && per >= 45)
    {
        printf("The student got a 2nd divisin marks with a percentage of %f \n", per);
    }
    else if (per < 45 && per >= 34)
    {
        printf("The student got a 3rd division marks with a percentage of %f \n", per);
    }
    else if (per < 34)
    {
        printf("The student failed\n");
    }
    else
    {
        printf("Enter the correct marks plz \n");
    }
}