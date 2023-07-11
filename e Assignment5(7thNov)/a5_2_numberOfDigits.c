#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    if (a / 10 == 0)
        printf("1 Digit\n");
    else if (a / 100 == 0)
        printf("2 Digit\n");
    else if (a / 1000 == 0)
        printf("3 Digit\n");
    else if (a / 10000 == 0)
        printf("4 Digit\n");
    else if (a / 100000 == 0)
        printf("5 Digit\n");
    else
        printf("not in range\n");

    return 0;
}