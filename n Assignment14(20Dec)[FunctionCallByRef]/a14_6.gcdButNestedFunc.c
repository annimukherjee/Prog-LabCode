#include <stdio.h>
int gcdOfTwoNos(int, int);
int gcdArr(int *);

int main()
{
    int a[] = {32, 40, 64, 88, 72};
    printf("gcd of array: %d\n", gcdArr(a));
    return 0;
}

int gcdOfTwoNos(int a, int b)
{
    int gcd;
    for (int i = 0; i <= a && i <= b; i++)
    {
        if (a % i == 0 && b % i == 0)
            gcd = i;
    }

    return gcd;
}

int gcdArr(int *b)
{
    int gCd = gcdOfTwoNos(*b, *(b + 1));
    for (int i = 2; i < 5; i++)
        gCd = gcdOfTwoNos(gCd, b[i]);

    return gCd;
}