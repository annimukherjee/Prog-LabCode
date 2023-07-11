#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    printf("* \n");
    for (int a = 2; a < n; a++)
    {
        printf("* ");
        for (int i = 1; i <= (a - 2); i++)
            printf("  ");
        printf("* ");
        printf("\n");
    }
    for (int i = 1; i <= n; i++)
        printf("* ");
    printf("\n");

    return 0;
}