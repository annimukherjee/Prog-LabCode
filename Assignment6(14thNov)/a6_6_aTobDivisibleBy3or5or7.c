#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int i = a;
    while (i <= b)
    {
        if (i % 3 == 0)
            printf("Divisible by 3: %d\n", i);
        if (i % 6 == 0)
            printf("Divisible by 6: %d\n", i);
        if (i % 7 == 0)
            printf("Divisble by 7: %d\n", i);
        i++;
    }

    return 0;
}