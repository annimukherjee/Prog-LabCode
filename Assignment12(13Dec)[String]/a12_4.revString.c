#include <stdio.h>
int main()
{
    char c[100], temp;
    int cc = 0, i, j;
    scanf("%[^\n]s", c);
    for (int i = 0; i < 100; i++)
    {
        if (c[i] == '\0')
            break;
        else
            cc++;
    }
    for (i = 0, j = cc - 1; i < j; i++, j--)
    {
        temp = c[j];
        c[j] = c[i];
        *(c+i) = temp;
    }
    printf("rev string\n%s\n", c);

    return 0;
}