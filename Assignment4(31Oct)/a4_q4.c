#include <stdio.h>
int main()
{
    // TODO: Question 4

    int a = 0xAB093CB8;
    int b = (a & 0xFF000000)>>24;
    int c = (a & 0xFF0000)>>8;
    int d = (a & 0xFF00)<<8;
    int e = (a & 0xFF)<<24;

    int f = b|c|d|e;
    printf("\n%x\n",f);

    return 0;
}