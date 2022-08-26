#include <stdio.h>
int max_min(int array[], int x)
{
    int max = array[0], min = array[0];
    for (int i = 0; i < x; i++)
    {
        if (array[i] < min)
        {
            min = array[i];
        }
        else if (array[i] > max)
        {
            max = array[i];
        }
    }
    printf("The maximun number of the array is : %d\n", max);
    printf("The minimum number of the array is : %d\n", min);
}
int sum_avg(int array[], int x)
{
    int sum = 0;
    for (int j = 0; j < x; j++)
    {
        sum = sum + array[j];
    }
    printf("The sum of the all number is : %d\n The avarage of the elements is : %f\n", sum, (sum * 1.0) / x);
}
void main()
{
    int arr[] = {1, 7, 8, 3, 4, 78, 23, 43, 66, 90};
    int z = sizeof(arr) / sizeof(int);
    max_min(arr, z);
    sum_avg(arr, z);
}