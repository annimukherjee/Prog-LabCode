#include <stdio.h>
int main()
{
    char apple[6] = "apple", appleCopy[6];
    for (int i = 0; i < 6; i++)
    {
        *(appleCopy + i) = *(apple + i);
        printf("%c", *(appleCopy + i));
    }
    printf("\n");
    return 0;
}