#include <stdio.h>
int main()
{
    char a[100];
    char b[100];
    printf("enter a word: \n");
    scanf("%s", a);
    char space = getchar();
    printf("enter a sentence\n");
    scanf("%[^\n]s", b);

    printf("without space:%s\nwith spaces:%s\n", a, b);
    return 0;
}