#include <stdio.h>
void printArrBackward(int *, int);

int main()
{
    int a[10];
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &*(a + i));
    }
    int size = 10;
    printArrBackward(a, size);
    return 0;
}

void printArrBackward(int *a, int size)
{
    if (size == 0)
        return;

    printArrBackward(a + 1, size - 1);
    printf("%d ", *a);
}
