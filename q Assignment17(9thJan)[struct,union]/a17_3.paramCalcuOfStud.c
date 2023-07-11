#include <stdio.h>
struct student
{
    int roll;
    int age;
    int mark[4];
} s[3];

void takeInput(struct student *si)
{
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", i);
        // roll
        printf("roll\n");
        scanf("%d", &((*(si + i)).roll));
        // age
        printf("age\n");
        scanf("%d", &((*(si + i)).age));
        for (int j = 0; j < 4; j++)
        {

            // marks*4
            printf("marks %d\n", j + 1);
            scanf("%d", &((*(si + i)).mark[j]));
        }
    }
}

void calcs(struct student *sc)
{
    int max = -1, min = 9999, total = 0, total_stud = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            total_stud += (*(sc + i)).mark[j];
        }

        total += total_stud;
        if (total_stud > max)
            max = total_stud;
        if (total_stud < min)
            min = total_stud;
        total_stud = 0;
    }
    printf("max among total marks of all students: %d\n", max);
    printf("min among total marks of all students: %d\n", min);
    printf("total marks of all stud: %d\n", total);
    printf("avg marks is %.2f\n", (total / 3.0));
}

// void display(struct student *sd)
// {
//     for (int i = 0; i < 3; i++)
//     {
//         printf("STUDENT %d DETAILS\n==============\n", i + 1);
//         // roll
//         printf("roll: %d\n", ((*(sd + i)).roll));
//         // age
//         printf("age: %d\n", ((*(sd + i)).age));
//         for (int j = 0; j < 4; j++)
//         {
//             printf("marks %d\n", j + 1);
//             printf("%dMARK\n", ((*(sd + i)).mark[j]));
//         }
//     }
// }

int main()
{

    takeInput(&s);
    calcs(&s);
    // display(&s);
    return 0;
}
