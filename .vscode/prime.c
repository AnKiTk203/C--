#include <stdio.h>
int main()
{
    int n,i,c=0;
    printf("Enter a number:\n");
    scanf("%d",&n);
     if (n==2)
    {
        printf("%d is a prime No.",n); 
    }
    else 
    {
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        c++;
    }
    if (c<=2)
    printf("%d is a prime No.",n);
    else 
    printf("%d is not a prime No.",n);
    }
    return 0;
}