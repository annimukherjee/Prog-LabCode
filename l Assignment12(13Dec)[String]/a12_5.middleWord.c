#include <stdio.h>
int main()
{
    char c[100];
    int si, ei, flag = 1, wrdCnt = 0;
    printf("3 words separated by arbitary num of spaces: \n");
    scanf("%[^\n]", c);
    for (int i = 0; i < 100; i++)
    {
        if (c[i] == ' ' && c[i + 1] != ' ')
            wrdCnt++;
        if (wrdCnt == 1)
        {
            if (flag == 1)
                si = i;
            flag++;
        }
        if (wrdCnt == 2)
        {
            ei = i;
            break;
        }
    }
    printf("2nd word :\n");
    for (int i = si; i < ei; i++)
    {
        if (c[i] != ' ')
            printf("%c", c[i]);
    }
    printf("\n");

    return 0;
}