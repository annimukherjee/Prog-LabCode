#include<stdio.h>
int main()
{
    char c[20], lW[3];
    int si = 0;
    for (int i = 0; i < 6; i++,si+=3)
        scanf("%s", c + si);
    scanf("%s", lW);
    c[si++] = lW[0];
    c[si] = lW[1];
    for (int i = 0; i < 20; i++)
        printf("%c", *(c + i));

    return 0;
}