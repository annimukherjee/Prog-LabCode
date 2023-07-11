#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d:%d", &a, &b);
    if (a > 12)
        printf("12hr format: %d:%d pm\n", a - 12, b);
    else
        printf("12hr format: %d:%d am\n", a, b);
    return 0;
}