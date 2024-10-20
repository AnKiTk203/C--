#include <stdio.h>
int g(int m,int n);
int main()
{
    int n,m,t;
    printf("Enter a no.");
    scanf("%d%d",&m,&n);
    /* if(n>m)
    {
        t=m;
        m=n;
        n=t;
    }*/
    int j = g(m,n);
    printf("%d is gcd ",j);
    return 0;
}
int g(int m,int n)
{
   if(m%n==0)
   {
   return n;
   }
   else 
   g(n,m%n);
}