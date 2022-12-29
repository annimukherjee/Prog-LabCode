#include <stdio.h>
int main()
{
    int n;
    printf("size of arr: ");
    scanf("%d", &n);
    int a[n];

    for (int i = 1; i <= n; i++)
        a[i - 1] = i;
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
    return 0;
}
