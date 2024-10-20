#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter two Nos: ");
    scanf("%d%d",&a,&b);
    printf("Output 2:\n");
    if (a%2==0)
    printf("%d is an even no.\n",a);
    else 
    printf("%d is an odd no.\n",a);
    if (b%2==0)
    printf("%d is an even no.\n",b);
    else 
    printf("%d is an odd no.\n",b);
    return 0;
}