#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int c = 7;

    for (int a = 1; a <= n; a++)
    {
        for (int i = 1; i <= n - a; i++)
            printf("  ");
        for (int j = 1; j <= ((2 * (a)) - 1); j++)
        {
            if (j % 2 != 0)
                printf("1 ");
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}