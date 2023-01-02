#include <stdio.h>
void dispDesc(int);
int main()
{
    int n;
    scanf("%d", &n);
    printf("\ndescending: n to 1:\n");
    dispDesc(n);
    return 0;
}

void dispDesc(int n)
{
    if (n == 1)
    {
        printf("%d\n", 1);
        return;
    }
    printf("%d\n", n);
    dispDesc(n - 1);

    // if (n > 0)
    // {
    //     printf("%d ", n);
    //     dispDesc(n - 1);
    // }
}