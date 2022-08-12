#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[] = {2, 6, 4, 46, 7, 6};
    int *p = a;
    int size = sizeof(a) / sizeof(int);

    for (int i = 0; i < size; i++)
    {
        printf("address= %d\n", &a[i]);
        printf("address= %d\n", a + i);
        printf("value= %d\n", a[i]);
        printf("value= %d\n", *(a + i));
    }
    return 0;
}