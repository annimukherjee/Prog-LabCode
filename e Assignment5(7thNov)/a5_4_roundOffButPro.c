#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    if (b == 1)
    {
        int d = a % 10;
        if (d >= 5)
        {
            printf("%d\n", ((a / 10) + 1) * 10);
        }
        else
        {
            printf("%d\n", (a / 10) * 10);
        }
    }
    else if (b == 2)
    {
        int d = a % 100;
        if (d >= 50)
            printf("%d\n", ((a / 100) + 1) * 100);
        else
            printf("%d\n", (a / 100) * 100);
    }
    else if (b == 3)
    {
        int d = a % 1000;
        if (d >= 500)
            printf("%d\n", ((a / 1000) + 1) * 1000);
        else
            printf("%d\n", (a / 1000) * 1000);
    }

    return 0;
}