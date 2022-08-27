#include <stdio.h>
int binarySearch(int arr[], int start, int end, int k)
{
    while (start < end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == k)
        {
            return mid;
        }
        else if (arr[mid] > k)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}
void main()
{
    int arr[] = {2, 6, 8, 12, 45, 56, 88, 90, 123, 345, 445}, start, end, key;
    printf("Enter the key element :\n");
    scanf("%d", &key);
    int n = sizeof(arr) / sizeof(int);
    int p = binarySearch(arr, 0, n - 1, key);
    if (p == -1)
    {
        printf("The element is not in the array\n");
    }
    else
    {
        printf("The element is in the array with index no. : %d\n", p);
    }
}