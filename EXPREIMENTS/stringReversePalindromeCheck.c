#include <stdio.h>
int main()
{
    char str[100];
    scanf("%[^\n]s", str);
    int i = 0, CONTROL = 1;
    while (CONTROL)
    {
        if (str[i] == 0)
            break;
        i++;
    }
    char rev[i + 1];
    int c = 0;
    for (int j = 0; j < i; j++)
    {
        rev[j] = str[i - j - 1];
    }
    rev[i] = '\0';
    for (int revCheck = 0; revCheck < i; revCheck++)
    {
        if (rev[revCheck] != str[revCheck])
        {
            CONTROL = 99;
            printf("NOT PALINDROME\n");
            break;
        }
    }
    if (CONTROL != 99)
    {
        printf("PALINDROME\n");
    }

    return 0;
}