#include <stdio.h>
int main()
{
    printf("enter the day of the week on which the 1st of jan falls: ");
    int d;
    scanf("%d", &d);
    printf("JANUARY\n");
    printf("MON\tTUE\tWED\tTHURS\tFRI\tSAT\tSUN\n");
    int i = 1;
    while (i < d)
    {
        printf("\t");
        i++;
    }
    i = 1;
    int count = d - 1;
    while (i <= 31)
    {
        printf("%d\t", i);
        count++;
        if (count == 7)
        {
            printf("\n");
            count = 0;
        }
        i++;
    }

    return 0;
}