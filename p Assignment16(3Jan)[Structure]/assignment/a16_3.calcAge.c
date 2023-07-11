#include <stdio.h>
struct date
{
    int day;
    int month;
    int year;
};
struct date ageCalculator(struct date);

int main()
{
    struct date dob;
    scanf("%d", &dob.day);
    scanf("%d", &dob.month);
    scanf("%d", &dob.year);
    struct date age = ageCalculator(dob);
    printf("Age: %d years, %d months, %d days\n", age.year, age.month, age.day);
    return 0;
}

struct date ageCalculator(struct date dob)
{
    int currDate = 3;
    int currMonth = 1;
    int currYear = 2023;
    struct date age;

    age.year = currYear - dob.year;
    age.month = currMonth - dob.month;
    age.day = currDate - dob.day;

    if (age.day < 0)
    {
        age.day += 31;
        age.month--;
    }

    if (age.month < 0)
    {
        age.month += 12;
        age.year--;
    }

    return age;
}
