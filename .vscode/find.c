#include <stdio.h>
int fun(int *a,int n)
{
    int i;
  
    int  max=*a,min=*a;
    for(i=0;i<n;i++)
    {
        if(min>*(a+i))
        min= *(a+i);
    }
    for(i=0;i<n;i++)
    {
        if(max<*(a+i))
        max= *(a+i);
    }
    printf("Max is %d\n",max);
    printf("Min is %d\n",min);
    return 0;
}

int main()
{
    int p[5]={1,2,39,4,5};
    fun(p,5);
}