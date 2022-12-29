#include <stdio.h>
int main()
{
    // TODO: Question 3
    char c = 0xAB;
    printf("Before swapping: ");
    printf("%x", c & 0xFF);
    int first4Bits = c & 0xF0;
    int last4Bits = c & 0x0F;
    int fullNumber = (first4Bits) >> 4 | (last4Bits) << 4;
    printf("\n\nAfter swap: %x\n", fullNumber);
    return 0;
}