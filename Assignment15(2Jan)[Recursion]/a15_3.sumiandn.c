#include <stdio.h>
int sum(int, int);

int main()
{
    int n, i;
    scanf("%d%d", &i, &n);
    int ans = sum(i, n);
    printf("sum from %d to %d is %d\n", i, n, ans);
    return 0;
}

int sum(int i, int n)
{
    if (i > n)
        return 0;
    else
        return i + sum(i + 1, n);
}
