#include <stdio.h>
int main()
{
    char a[100];
    int size = 0;
    scanf("%[^\n]s", a);
    for (int i = 0; i < 100; i++)
    {
        if (a[i] != '\0')
            size += 1;
        else
            break;
    }
    printf("the size of \"%s\" is: %d\n", a, size);

    return 0;
}