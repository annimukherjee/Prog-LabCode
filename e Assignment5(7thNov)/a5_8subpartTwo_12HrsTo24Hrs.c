#include <stdio.h>
int main()
{
    int a, b;
    char c;
    scanf("%d:%d %c", &a, &b, &c);
    if (c == 'p')
        printf("24hr format: %d:%d\n", a + 12, b);
    else
        printf("24hr format: %d:%d\n", a, b);
    return 0;
}