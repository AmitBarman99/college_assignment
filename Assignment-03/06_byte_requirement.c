#include <stdio.h>
void main()
{
    int a = 37;
    float b = 37.0;
    printf("The bytes are required to store for 37 : %zu\n", sizeof(a));
    printf(" The bytes are required to store for 37.0 : %zu\n", sizeof(b));
}