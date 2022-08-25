#include <stdio.h>
void main()
{
    char x;
    while (1)
    {
        printf("Enter a charecter to get it's ASCII value :\n");
        scanf("%c", &x);
        if (x != 'q')
        {
            printf("The ASCII value of it is : %d\n\n", x);
            continue;
        }
        else
        {
            printf("Successfully exit !\n");
            break;
        }
    }
}