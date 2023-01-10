#include <stdio.h>
struct student
{
    char name[10];
    int roll;
    float marks1;
    float marks2;
    int age;
};

void readFunc(struct student *);

int main()
{
    struct student s1;
    readFunc(&s1);
    printf("name: %s\n", s1.name);
    printf("rollno: %d\n", s1.roll);
    printf("marks1: %.2f\n", s1.marks1);
    printf("marks2: %.2f\n", s1.marks2);
    printf("age: %d\n", s1.age);
    return 0;
}

void readFunc(struct student *s)
{
    char c[10], space;
    scanf("%s%c", c, &space);
    for (int i = 0; i < 10; i++)
        (*s).name[i] = c[i];
    scanf("%d%c", &(*s).roll, &space);
    scanf("%f%c", &(*s).marks1, &space);
    scanf("%f%c", &(*s).marks2, &space);
    scanf("%d%c", &(*s).age, &space);
}