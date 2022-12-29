#include<stdio.h>
int main()
{
    long int a = 998988;
    printf("Hex version of %li: %lx\n", a, a);
    char *p;
    p = (char*)&a;
    printf("Byte by byte anaysis: \n");
    printf("%x\n", *(p));
    printf("%x\n",*(p+1));
    printf("%x\n",*(p+2));
    printf("%x\n",*(p+3));
    return 0;
}