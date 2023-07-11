#include <stdio.h>
int main()
{
    int a, sum = 0, i = 1;
    while (i <= 10)
    {
        scanf("%d", &a);
        sum += a;
        i++;
    }
    printf("%d", sum);
    return 0;
}