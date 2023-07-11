#include <stdio.h>
int main()
{
    char c[100];
    int si, prntCnt = 1, wrdCnt = 0;
    printf("NAME :");
    scanf("%[^\n]", c);
    for (int i = 0; i < 100; i++)
    {
        if (c[i] == ' ' && c[i + 1] != ' ')
            wrdCnt++;
    }
    wrdCnt++;
    printf("%c. ", c[0]);
    for (int i = 0; i < 100; i++)
    {
        if (c[i] == ' ' && c[i + 1] != ' ' && prntCnt != wrdCnt - 1)
        {
            printf("%c. ", c[i + 1]);
            prntCnt++;
        }
        else if (c[i] == ' ' && c[i + 1] != ' ' && prntCnt == wrdCnt - 1)
        {
            si = i;
            break;
        }
    }
    for (int i = si; i < 100; i++)
    {
        if (c[i] != 0 && c[i] != ' ')
            printf("%c", c[i]);
        else if (c[i] == 0)
            break;
    }

    printf("\n");

    return 0;
}
