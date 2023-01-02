#include <stdio.h>
void dispDesc(int);
void dispAsc(int);
void dispArr(int *, int);
int main()
{
    int n;
    scanf("%d", &n);
    printf("\ndescending\n");
    dispDesc(n);
    printf("\nacending\n");
    dispAsc(n);
    printf("\narray\n");
    int a[5] = {2, 6, 3, 1, 3};
    int c = 5;
    dispArr(a, c);
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

void dispArr(int *a, int c)
{
    if (c > 0)
    {
        printf("%d ", *a);
        dispArr(a + 1, c - 1);
    }
    if (c == 0)
    {
        printf("\n");
    }
}