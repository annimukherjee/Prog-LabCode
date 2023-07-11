#include <stdio.h>
int factorial(int);
int summ(int, int);

int factorial(int x)
{
    int f = 1;
    for (int i = x; i >= 1; i--)
    {
        f *= i;
    }
    return f;
}

int summ(int x, int y)
{
    int c;
    c = x + y;
    return c;
    // return (x + y);
}

int main()
{
    int s = summ(factorial(7), factorial(9));
    printf("%d\n", summ(s, factorial(4)));
    return 0;
}