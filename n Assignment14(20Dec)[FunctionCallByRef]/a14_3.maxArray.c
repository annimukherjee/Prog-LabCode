#include <stdio.h>
void maxInArr(int *, int *);
int main()
{
    int a[] = {4, 7, 24, 4, 7, 3, 7, 8}, max = 0;
    maxInArr(a, &max);
    printf("max in the array is: %d\n", max);
    return 0;
}

void maxInArr(int *b, int *max)
{
    for (int i = 0; i < 8; i++)
    {
        if (*max < *(b + i))
            *max = *(b + i);
    }
}