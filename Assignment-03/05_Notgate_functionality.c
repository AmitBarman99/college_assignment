#include <stdio.h>
void main()
{
    int m, n;
    printf("Enter Your choosen value between 0 and 1\n ");
    scanf("%d", &n);
    if (n == 1)
    {
        printf("After implementing the functionality of a NOT gate, You will get the value : 0\n");
    }
    else if (n == 0)
    {
        printf("After implementing the functionality of a NOT gate, You will get the value : 1\n");
    }
    else
    {
        printf("Something is wrong, Plz enter between 0 and 1\n");
    }
}