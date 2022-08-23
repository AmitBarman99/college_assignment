#include <stdio.h>
void main()
{
    int a, b;
    printf("Enter two values as a and b :\n");
    scanf("%d\n%d", &a, &b);
    printf("The value of a and b before swaping are : %d\t%d\n", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("The value of a and b after swaping are : %d\t%d\n", a, b);
}