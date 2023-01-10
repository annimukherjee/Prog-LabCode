#include <stdio.h>
void printArrForward(int *, int);

int main()
{
    int a[10];
    for (int i = 0; i < 10; i++)
        scanf("%d", &*(a + i));
    int size = 10;
    printArrForward(a, size);
    return 0;
}

void printArrForward(int *a, int size)
{
    if (size == 0)
        return;
    printf("%d ", *a);
    printArrForward(a + 1, size - 1);
}
