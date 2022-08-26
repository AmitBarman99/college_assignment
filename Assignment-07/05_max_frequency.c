#include <stdio.h>
int main()
{
    int count = 0, maxCount = 0, maxElement, occurrence;
    printf("C Program to find highest frequency element in array \n");
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Please give value for index %d : ", i);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        count = 1;
        for (int j = i + 1; j < 10;j++)
        {
            if (arr[j] == arr[i])
            {
                count++;
                if (count > maxCount)
                {
                    maxElement = arr[j];
                    maxCount = count;
                }
            }
        }
    }
    printf("Maximum Frequency Element : %d, Occurrence= %d times",maxElement, maxCount);
    return 0;
}