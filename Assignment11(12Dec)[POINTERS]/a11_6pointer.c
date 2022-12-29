#include<stdio.h>
int main()
{
    int a[5] = {5, 9, 6, 8, 4};
    for (int i = 0; i < 2; i++)
    {
        int temp = *(a + i);
        *(a + i) = *(a + 4 - i);
        *(a + 4 - i) = temp;
    }
    for (int i = 0; i < 5; i++)
        printf("%d ", *(a + i));
    printf("\n");
    return 0;
}