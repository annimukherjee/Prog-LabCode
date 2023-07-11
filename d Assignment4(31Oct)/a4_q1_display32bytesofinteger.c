#include <stdio.h>
int main()
{
    int a = 0x93A40562;
    int b;
    b = a & 0xFF;
    int c = (a & 0xFF00) >> 8;
    int d = (a & 0xFF0000) >> 16;
    int e = (a & 0xFF000000) >> 24;
    printf("%x  %x  %x  %x", e, d, c, b);
    return 0;
}