#include <stdio.h>

void ububble(int *ptr, int n)
{
    int t;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (*(ptr + j) > *(ptr + j + 1))
            {
                t = *(ptr + j);
                *(ptr + j) = *(ptr + j + 1);
                *(ptr + j + 1) = t;
            }
        }
    }
}
int rbsearch(int *array, int start_index, int end_index, int element)
{
    if (end_index >= start_index)
    {
        int middle = start_index + (end_index - start_index) / 2;
        if (array[middle] == element)
            return middle;
        if (array[middle] > element)
            return rbsearch(array, start_index, middle - 1, element);
        return rbsearch(array, middle + 1, end_index, element);
    }
    return -1;
}
void main()
{
    int arr[100], n, key;
    printf("Enter the element number of your array\n");
    scanf("%d", &n);
    printf("Enter the elements of the array :\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the key element :\n");
    scanf("%d", &key);
    printf("The sorted array is :\n");
    ububble(&arr[0], n);
    for (int i = 0; i < n; i++)
    {
        printf("%d \n", *(arr + i));
    }
    int z = rbsearch(arr, 0, n - 1, key);
    if (z == -1)
    {
        printf("The key element is not in this array\n");
    }
    else
    {
        printf("The key element is in this array and it's index is : %d\n", z);
    }
}