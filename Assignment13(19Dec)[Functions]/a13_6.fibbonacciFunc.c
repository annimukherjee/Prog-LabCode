#include <stdio.h>
int fib(int);
int main()
{
    int b;
    scanf("%d", &b);
    printf("%d fibonacci nos sum to %d\n", b, fib(b));
    return 0;
}

int fib(int x)
{
    int fibb[x], sum = 1;
    *(fibb) = 0;
    *(fibb + 1) = 1;
    for (int i = 2; i < x; i++)
    {
        *(fibb + i) = *(fibb + i - 1) + *(fibb + i - 2);
        sum += fibb[i];
    }
    return sum;
}