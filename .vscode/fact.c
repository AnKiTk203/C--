#include <stdio.h>
int factorial(int a);
int main()
{
    int n;
    printf("Enter a no.");
    scanf("%d",&n);
    int z=factorial(n);
    printf("%d",z);
    return 0;
}
int factorial(int a)
{
    int f=1;
    if (a>0)
    f = a*(factorial(a-1));
    else
    return f;

}
