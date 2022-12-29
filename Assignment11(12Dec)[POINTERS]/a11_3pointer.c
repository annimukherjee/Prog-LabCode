#include<stdio.h>
int main()
{
    int a = 10;
    int b = 5;
    int *pa=&a;
    int *pb =&b;

    int temp;
    temp = *pa;
    *pa = *pb;
    *pb = temp;

    printf("%d\t%d", a, b);
    return 0;
}