#include <stdio.h>
int sum(int, int);

int main()
{
    int n = 5, i = 1;
    // scanf("%d%d", &n, &i);
    int ans = sum(i, n);
    printf("the sum from %d to %d is %d\n", i, n, ans);
    return 0;
}

int sum(int i, int n)
{
    if (i > n)
        return 0;
    else
        return i + sum(i + 1, n);
}
