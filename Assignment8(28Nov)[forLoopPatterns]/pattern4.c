#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int a = n; a >= 1; a--)
    {
        for (int j = 1; j <= (n - a); j++)
            printf("  ");
        for (int i = a; i >= 1; i--)
            printf("%d ", i);
        printf("\n");
    }

    return 0;
}