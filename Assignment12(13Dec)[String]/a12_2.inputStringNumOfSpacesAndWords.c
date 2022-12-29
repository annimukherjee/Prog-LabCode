#include <stdio.h>
int main()
{
    char c[100];
    int spacesCount = 0, wordCount = 1;
    scanf("%[^\n]s", c);
    for (int i = 0; i < 100; i++)
    {
        if (c[i] == ' ')
            spacesCount++;
        if (c[i] == ' ' && c[i + 1] != ' ')
            wordCount++;
    }
    printf("space: %d\nword: %d\n", spacesCount, wordCount);
    return 0;
}