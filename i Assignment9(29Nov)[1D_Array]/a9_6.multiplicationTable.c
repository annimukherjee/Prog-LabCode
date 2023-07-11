#include <stdio.h>
int main()
{
    int n;
    int a[10];
    scanf("%d", &n);
    for (int i = 0; i < 10; i++)
    {
        a[i] = (i + 1) * n;
        printf("%d ", a[i]);
    }

    printf("\n");
    return 0;
}
