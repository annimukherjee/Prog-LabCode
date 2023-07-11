#include <stdio.h>
int main()
{
    int a, c = 1;
    scanf("%d", &a);
    while (c <= 10)
    {
        printf("%d * %d = %d\n", a, c, a * c);
        c++;
    }

    return 0;
}