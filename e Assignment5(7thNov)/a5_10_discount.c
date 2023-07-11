#include <stdio.h>
int main()
{
    int a, b, c, d, e;
    printf("Price of 5 items\n");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    int total = a + b + c + d + e;
    if (total > 3000)
        total *= 0.7;
    else if (total > 2000)
        total *= 0.75;
    else if (total > 1000)
        total *= 0.8;
    if (total > 10000)
        total *= 0.95;
    printf("price after discount: %d\n", total);
    return 0;
}