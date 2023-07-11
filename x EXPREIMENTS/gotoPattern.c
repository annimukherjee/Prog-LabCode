#include <stdio.h>
int main()
{
    int j = 1;
    int a = 1;
ABC:
    j = 1;
KLM:
    printf("%d ", j);
    j++;
    if (j <= a)
        goto KLM;

    printf("\n");
    a++;
    if (a <= 4)
        goto ABC;

    return 0;
}