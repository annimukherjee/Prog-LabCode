#include <stdio.h>
void mulTable(int x);
int main()
{
    int x;
    scanf("%d", &x);
    mulTable(x);
    return 0;
}

void mulTable(int x)
{
    for (int i = 1; i < 11; i++)
        printf("%d * %d = %d\n", x, i, x * i);
    return;
}