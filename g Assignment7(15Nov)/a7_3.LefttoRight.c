#include <stdio.h>
int main()
{
    int a, n = 0, d, multiplier = 1, sum = 0, j = 1;
    scanf("%d", &a);
    int aa = a;
    while (a != 0)
    {
        a /= 10;
        n++;
    }
    int i = 1;
    int nn = n - 1;
    while (i <= n)
    {
        // printf("in loop: %d\n", i);
        d = aa % 10;
        while (j <= nn)
        {
            multiplier *= 10;
            j++;
        }
        sum += d * multiplier;
        multiplier = 1;
        j = 1;
        nn--;
        aa /= 10;
        i++;
    }
    while (sum != 0)
    {
        printf("%d\n", sum % 10);
        sum /= 10;
    }
    return 0;
}