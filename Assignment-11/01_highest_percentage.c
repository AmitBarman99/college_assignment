#include <stdio.h>
struct student
{
    char name[50];
    int roll;
    float percentage;
};
void main()
{
    struct student s[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Enter the students-%d name:\n", i + 1);
        scanf("%s", s[i].name);
        printf("Enter his roll number : \n");
        scanf("%d", &s[i].roll);
        printf("Enter his mark percentage :\n");
        scanf("%f", &s[i].percentage);
    }
    printf("Name\tRoll\tPercenrage\n");
    for (int j = 0; j < 10; j++)
    {
        printf("%s\t%d\t%f\n", s[j].name, s[j].roll, s[j].percentage);
    }
    for (int i = 0; i < 10; ++i)
    {
        if (s[0].percentage < s[i].percentage)
        {
            s[0].percentage = s[i].percentage;
        }
    }
    printf("The highest percentage of marks is : %f\n", s[0].percentage);
}