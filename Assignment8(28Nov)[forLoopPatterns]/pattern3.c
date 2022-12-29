#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int a = n; a >= 1; a--)
    {
        if (a % 2 == 0)
        {
            for (int i = 1; i <= a; i++)
                printf("%d ", i);
            printf("\n");
        }
        else
        {
            for (int i = a; i >= 1; i--)
                printf("%d ", i);
            printf("\n");
        }
    }

    return 0;
}