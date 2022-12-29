#include <stdio.h>
int main()
{
    int a = 1;
    int no, no1;
    scanf("%d %d", &no, &no1);
    while (a * a < no)
    {
        a++;
    }
    printf("\n");
    while (a * a <= no1)
    {
        printf("%d\n", a * a);
        a++;
    }

    return 0;
}