#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("\n\n");
    if (a < b)
    {
        int i = a;
        while (i <= b)
        {
            printf("%d ", i);
            i++;
        }
    }
    else
    {
        int i = a;
        while (i >= b)
        {
            printf("%d ", i);
            i--;
        }
    }

    return 0;
}