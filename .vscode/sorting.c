#include <stdio.h>
#include <string.h>
#include <stdbool.h>
void sorting (int n)
{
    int i,j,temp;
    int arr[n];
    int count = 0;
    printf("Enter elements: \n");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    bool swap = false;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
        if(arr[i]>arr[j])
        {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            swap = true;
        }
        count++;
        }
        if(!swap)
        break;
    }
    printf("%d\n",count);
    printf("Sorted Array:\n");
    for(i=0;i<n;i++)
    printf("%d ",arr[i]);
}
int main()
{
    int n,i;
    printf("Enter size of array\n");
    scanf("%d",&n);
    sorting(n);
}