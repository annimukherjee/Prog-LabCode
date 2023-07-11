#include <stdio.h>
int main()
{
    int a, b;
    char c;
    scanf("%d %c %d", &a, &c, &b);
    switch (c)
    {
    case '+':
        printf("%d\n", a + b);
        break;
    case '-':
        printf("%d\n", a - b);
        break;
    case '*':
        printf("%d\n", a * b);
        break;
    case '/':
        if (b == 0)
        {
            printf("division by 0 undefined\n");
            break;
        }
        printf("%d\n", a / b);
        break;
    default:
        printf("invalid operation\n");
        break;
    }
    return 0;
}