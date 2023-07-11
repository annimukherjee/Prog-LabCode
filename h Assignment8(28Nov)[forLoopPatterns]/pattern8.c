#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int v = (n + 1) / 2;
    for (int a = 1; a <= v; a++)
    {
        for (int j = 1; j <= v - a; j++)
            printf("  ");
        for (int i = 1; i <= a; i++)
            printf("* ");
        printf("\n");
    }
    for (int a = v - 1; a >= 1; a--)
    {
        for (int j = 1; j <= v - a; j++)
            printf("  ");
        for (int i = 1; i <= a; i++)
            printf("* ");
        printf("\n");
    }

    return 0;
}