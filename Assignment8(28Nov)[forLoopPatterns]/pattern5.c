#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int a = 1; a <= n; a++)
    {
        for (int j = 1; j <= (a - 1); j++)
            printf("  ");
        for (int i = a; i <= n; i++)
            printf("%d ", i);
        for (int k = n; k >= a; k--)
            printf("%d ", k);
        printf("\n");
    }

    return 0;
}