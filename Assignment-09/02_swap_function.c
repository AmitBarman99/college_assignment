#include <stdio.h>
int swap(int *ptr, int *p)
{
    int s;
    s = *ptr;
    *ptr = *p;
    *p = s;
}
void main()
{
    int a, b, s;
    printf("Enter the contents of two variables :\n");
    scanf("%d%d", &a, &b);
    swap(&a, &b);
    printf("After swaping we will get these two variable's content :%d\t %d\n", a, b);
}