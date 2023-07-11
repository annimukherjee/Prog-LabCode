#include <stdio.h>

struct data
{
    int a;
    int b;
};
void add(struct data);

// void add(struct data k)
// {
//     printf("%d\n", k.a + k.b);
// }

int main()
{
    struct data s = {6, 8};
    add(s);
    return 0;
}

void add(struct data k)
{
    printf("%d\n", k.a + k.b);
}
