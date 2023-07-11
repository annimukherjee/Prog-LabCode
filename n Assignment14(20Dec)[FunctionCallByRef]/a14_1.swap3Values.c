#include <stdio.h>
void swap(int *, int *, int *);
int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    printf("ORIGINAL:\n\na= %d\nb= %d\nc= %d\n", a, b, c);
    swap(&a, &b, &c);
    printf("\n\nSWAPPED\n\na= %d\nb= %d\nc= %d\n", a, b, c);
    return 0;
}

void swap(int *a, int *b, int *c)
{
    int temp = *a;
    int temp2 = *c;
    *a = *b;
    *c = temp;
    *b = temp2;
    return;
}