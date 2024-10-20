#include <stdio.h>
int main()
{
    int n,i,a;
    printf("Enter size: ");
    scanf("%d",&n);
    int array1[n],array2[n],array3[n];
    printf("Enter random number:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&array1[i]);
    }
    printf("Enter permutation seq(values 0 to size-1):\n");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a);
        array2[i]=array1[a];
    }
    printf("Scrambled output:\n");
    for(i=0;i<n;i++)
    {
        printf("%d  ",array2[i]);
    }
    printf("\n");
    printf("Compute reverse permutation seq:\n");
    for(i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
        if(array2[j]==array1[i])
        {
        array3[i]=array2[j];
        printf("%d ",j);
        }
        }
    }
    printf("\nScrambled op:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",array3[i]);
    }
        return 0;
}