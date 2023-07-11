#include <stdio.h>
#include <math.h>

int main()
{
    char a;
    unsigned char b;
    printf("\n\nSize of signed char: %lu byte\n", sizeof(a));
    printf("Size of unsigned char: %lu byte\n\n", sizeof(b));
    printf("Range of signed char: -%.0lf to %.0lf\n", pow(2, 8 - 1), pow(2, 8 - 1) - 1);
    printf("Range of unsigned char: %d to %.0lf\n\n", 0, pow(2, 8) - 1);
}