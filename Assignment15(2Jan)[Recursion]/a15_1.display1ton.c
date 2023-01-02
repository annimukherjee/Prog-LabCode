#include <stdio.h>
void dispAsc(int);
int main()
{
    int n;
    scanf("%d", &n);
    printf("\nacending: 1 to n:\n");
    dispAsc(n);
    return 0;
}

void dispAsc(int n)
{

    if (n == 1)
    {
        printf("%d\n", 1);
        return;
    }
    dispAsc(n - 1);
    printf("%d\n", n);

    // if (n > 0)
    // {
    //     dispAsc(n - 1);
    //     printf("%d ", n);
    // }
}
