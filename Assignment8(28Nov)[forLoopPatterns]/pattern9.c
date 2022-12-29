#include <stdio.h>
int main()
{
    int n;
    int c = 1;
    scanf("%d", &n);
    for (int a = 1; a <= n; a++)
    {
        for (int i = 1; i <= a; i++)
        {
            printf("%d ", c);
            c++;
        }
        printf("\n");
    }

    return 0;
}