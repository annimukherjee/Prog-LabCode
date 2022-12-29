#include <stdio.h>
int max(int, int, int *);
int main()
{
    int sum = 0;
    int x = max(3, 5, &sum);
    printf("%d\n", x);
    printf("%d\n", sum);
}

int max(int a, int b, int *o)
{
    *o = a + b;
    if (a > b)
        return a;
    return b;
}