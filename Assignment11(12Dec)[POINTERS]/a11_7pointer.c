#include <stdio.h>
int main()
{
    int a = 0x45B396B0;
    char *p;
    p = (char *)&a;
    printf("before swap\n");
    printf("%x \n", a);

    int temp = *(p + 1);
    p[1] = p[2];
    p[2] = temp;

    temp = *(p);
    *(p) = p[3];
    p[3] = temp;

    printf("after swap\n%x\n", a);
    return 0;
}