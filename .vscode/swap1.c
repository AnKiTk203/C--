#include <stdio.h>
int swap (int *p,int *q);
int main()
{
    int a=5,b=2;
    swap (&a,&b);
    printf("%d, %d",a,b);
    return 0;
}
int swap (int *p,int *q)
{
    int t=*p;
    *p=*q;
    *q=t;
    return 0;
}