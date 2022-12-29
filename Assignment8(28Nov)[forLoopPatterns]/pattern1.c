#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int a = 1; a <= n; a++)
    {
        for (int i = 1; i <= a; i++)
            printf("%d ", i);
        printf("\n");
    }

    return 0;
}