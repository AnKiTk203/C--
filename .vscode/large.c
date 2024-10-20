#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three Nos: ");
    scanf("%d%d%d",&a,&b,&c);
    if (a>b && a>c)
    printf("Largest No. is %d",a);
    else if (b>a && b>c)
    printf("Largest No. is %d",b);
    else if (c>a && c>b)
    printf("Largest No. is %d",c);
    return 0;
}