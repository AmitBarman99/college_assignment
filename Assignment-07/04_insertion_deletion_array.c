#include <stdio.h>
int insertion(int arr[], int n, int ins)
{
    for (int i = 9; i >= n; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[n] = ins;
    printf("After insertion the array willl be :\n");
    for (int j = 0; j < 10; j++)
    {
        printf("%d ", arr[j]);
    }
    printf("\n");
}
int deletion(int arr[], int del_index)
{
    for (int i = del_index; i < 10; i++)
    {
        arr[i] = arr[i + 1];
    }
    printf("After deletion the array will be :\n");
    for (int j = 0; j < 9; j++)
    {
        printf("%d ", arr[j]);
    }
    printf("\n");
}
void main()
{
    int arr[20];
    int ins, i_index, del_index;
    printf("Enter your array's 9 elements :\n");
    for (int i = 0; i < 9; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the index number <10 where you want to insert the value\n");
    scanf("%d", &i_index);
    printf("Enter the insert number value :\n");
    scanf("%d", &ins);
    insertion(arr, i_index, ins);
    printf("Enter the index number<10 where you want to delete the value\n");
    scanf("%d", &del_index);
    deletion(arr, del_index);
}