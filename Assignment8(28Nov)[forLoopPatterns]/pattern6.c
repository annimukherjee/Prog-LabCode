#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int a = 1; a <= n; a++)
    {
        if (a == 1 || a == n)
        {
            for (int i = 1; i <= n; i++)
                printf("* ");
            printf("\n");
        }
        else
        {
            printf("* ");
            for (int j = 1; j <= n - 2; j++)
                printf("  ");
            printf("* ");
            printf("\n");
        }
    }

    return 0;
}