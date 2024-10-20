#include <stdio.h>
int main()
{
    int a,b,m;
    scanf ("%d%d%d",&a,&b,&m);
    int binary,x=1,power=a%m;
    while (b!=0)
    {
        binary = b%2;
        if (binary==1)
        x= x*power%m;
        else if(binary==0)
        x=x;
        power = power * power %m;
        b=b/2;
    }
    printf("%d\t%d",x,power);

}