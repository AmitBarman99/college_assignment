#include <stdio.h>
int search(int array[], int n, int x)
{
    for (int i = 0; i < n; i++)
        if (array[i] == x)
            return i;
    return -1;
}
void main()
{
    int array[] = {2, 45, 66, 23, 12, 44, 56, 90, 77, 99, 32, 76};
    int x;
    printf("Enter your key element :\n");
    scanf("%d", &x);
    int n = sizeof(array) / sizeof(array[0]);
    int result = search(array, n, x);
    (result == -1) ? printf("Sorry, Element not found\n") : printf("Element %d found at index: %d\n", x, result);
}