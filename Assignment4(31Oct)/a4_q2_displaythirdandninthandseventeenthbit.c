#include <stdio.h>
int main()
{
    // TODO: Quesion 2

    int a = 0x5ABE2987;
    int thirdBit = (a & 0x4) >> 2;
    int ninthBit = (a & 0x100) >> 8;
    int seventeenthBit = (a & 10000) >> 16;

    printf("Third bit: %d\n", thirdBit);
    printf("Ninth bit: %d\n", ninthBit);
    printf("Seventeenth bit: %d\n", seventeenthBit);
    return 0;
}