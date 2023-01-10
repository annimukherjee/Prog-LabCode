#include <stdio.h>
struct student
{
    int roll;
    float marks1, marks2, marks3;
};

void poorCalc(struct student[], int[]);

int main()
{
    struct student s[5];
    for (int i = 0; i < 5; i++)
    {
        printf("enter the 3 marks of %d student: ", i + 1);
        scanf("%f", &s[i].marks1);
        scanf("%f", &s[i].marks2);
        scanf("%f", &s[i].marks3);
        printf("roll num of %d student: ", i + 1);
        scanf("%d", &s[i].roll);
    }
    int poorStudents[5] = {0};
    poorCalc(s, poorStudents);
    for (int i = 0; i < (sizeof(poorStudents) / 4); i++)
    {
        if (poorStudents[i] != 0)
            printf("%d scored below 30%% avg...\n", poorStudents[i]);
    }
    return 0;
}

void poorCalc(struct student info[], int poor[])
{
    float avg[5];
    int k = 0;
    for (int i = 0; i < 5; i++)
    {
        float total = info[i].marks1 + info[i].marks2 + info[i].marks3;
        avg[i] = total / 3.0;
        if (avg[i] <= 30)
        {
            poor[k] = info[i].roll;
            k++;
        }
    }
}