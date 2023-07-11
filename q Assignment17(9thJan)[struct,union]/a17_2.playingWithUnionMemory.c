#include <stdio.h>
union data
{
    int e, d;
    char a[2], b[2];
};

int main()
{
    union data DATA;
    DATA.a[0] = 9;
    DATA.b[1] = 10;
    printf("%x\n", DATA.d);
}