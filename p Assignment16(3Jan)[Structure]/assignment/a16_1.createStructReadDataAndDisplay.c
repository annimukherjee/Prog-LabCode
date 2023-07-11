#include <stdio.h>
struct student
{
    char name[10];
    int roll;
    float marks1;
    float marks2;
    int age;
};

int main()
{
    struct student s1 = {"bobby", 22055234, 98.2, 56.6, 19};
    printf("name: %s\n", s1.name);
    printf("rollno: %d\n", s1.roll);
    printf("marks1: %.2f\n", s1.marks1);
    printf("marks2: %.2f\n", s1.marks2);
    printf("age: %d\n", s1.age);
    return 0;
}