#include <stdio.h>
int main()
{
    int a, c = 0;
    scanf("%d", &a);
    while (a > 0)
    {
        a /= 10;
        c++;
    }
    printf("Num of digits: %d\n", c);

    return 0;
}