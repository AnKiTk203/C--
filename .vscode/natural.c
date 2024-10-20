#include <stdio.h>
int main()
{
    int i, n, sum = 0;
    printf("Enter a no: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("Sum of first %d natural nos is %d ",n, sum);
    return 0;
}