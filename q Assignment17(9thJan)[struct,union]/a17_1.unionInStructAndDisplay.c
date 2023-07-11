#include <stdio.h>
union id
{
    int aadhar;
    char passport[10];
};
struct student
{
    int roll;
    char name[50];
    union id studID;
    int aadharOrPassport;
};

void inputAndDisplay(struct student *S)
{
    // input
    for (int i = 0; i < 3; i++)
    {

        scanf("%[^\n]s", (*(S + i)).name);
        scanf("%d", &(*(S + i)).roll);
        printf("Aadhar(ENTER1) or Passport(ENTER0)\n");
        scanf("%d", &(*(S + i)).aadharOrPassport);
        if (((*(S + i)).aadharOrPassport) == 1)
        {
            scanf("%d", &(*(S + i)).studID.aadhar);
        }
        else
        {
            getchar();
            scanf("%[^\n]s", (*(S + i)).studID.passport);
        }
        getchar();
    }

    // output
    for (int i = 0; i < 3; i++)
    {
        printf("PERSON %d\n------\n", i + 1);
        printf("%s\n", (*(S + i)).name);
        printf("%d\n", (*(S + i)).roll);
        if (((*(S + i)).aadharOrPassport) == 1)
        {
            printf("Aadhar: %d\n", (*(S + i)).studID.aadhar);
        }
        else
        {
            printf("Passport: %s\n", (*(S + i)).studID.passport);
        }
    }
}

int main()
{
    struct student s[3];
    inputAndDisplay(s);
    return 0;
}