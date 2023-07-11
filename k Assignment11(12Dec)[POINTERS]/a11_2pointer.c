#include <stdio.h>
int main()
{
    int a = 10;
    int *pointerA;
    pointerA = &a;

    int **pointerTopointerA;
    pointerTopointerA = &pointerA;

    printf("value stored in a: %d\n", a);

    printf("Location of a thru &a is: %p\n", &a);
    printf("Location of a thru pointerA is: %p\n", pointerA);

    printf("Location of pointerA thru &pointerA is: %p\n", &pointerA);
    printf("Location of pointerA thru pointerTopointerA is: %p\n", pointerTopointerA);

    printf("Location of pointerTopointerA thru &pointerTopointerA is: %p\n", &pointerTopointerA);

    printf("modifying a through pointerTopointerA\n");
    **(pointerTopointerA) = 9;

    printf("\n\nmodified val from 10 to 9: %d\n", a);

    return 0;
}