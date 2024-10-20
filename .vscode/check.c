#include <stdio.h>

int main()
{
    int a[2] = {10, 20};
    int *p = &a[1];
    printf("%p\n", );
    printf("%d\n", *(a+1));
    printf("%d", (*a)+1);
    return 0;
}