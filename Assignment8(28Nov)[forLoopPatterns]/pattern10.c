#include <stdio.h>
int main()
{
    int n, c = 0, v;
    scanf("%d", &n);
    int b = ((n * (n + 1)) / 2);
    for (int a = 1; a <= n; a++)
    {
        if (a % 2 != 0)
        {
            if (a == 1)
            {
                for (int i = 1; i <= ((n + 1) - a); i++)
                    printf("%d ", b--);
                printf("\n");
            }
            else
            {
                b = v - 1;
                for (int i = 1; i <= ((n + 1) - a); i++)
                    printf("%d ", b--);
                printf("\n");
            }
        }
        else
        {
            int f = (b - ((n + 1) - a)) + 1;
            v = f;
            for (int i = 1; i <= ((n + 1) - a); i++)
            {
                printf("%d ", f++);
                c++;
            }
            b--;
            printf("\n");
        }
    }
    return 0;
}