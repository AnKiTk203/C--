#include<stdio.h>
int count(int num,int digit,int sum)
{
    int x=num,y=digit,z=sum;
    int rem=x%10;
    if (rem==0)
    {
    }
    else 
    {
        z=z+rem;
        y+=1;
        x/=10;
        return count(x,y,z);
    }
    printf("digit= %d\n",y);
    printf("sum= %d\n",z);
    return 0;
}
int main()
{
    int num,digit=0,sum=0;
    printf("Enter a no.");
    scanf("%d",&num);
    count(num,digit,sum);
    return 0;
}