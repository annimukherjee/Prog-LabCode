#include <stdio.h>
int lastTwoDig(int);
int main()
{
    int x;
    scanf("%d", &x);
    printf("Last two dig: %d\n", lastTwoDig(x));
    return 0;
}

int lastTwoDig(int x)
{
    return (x % 100);
}