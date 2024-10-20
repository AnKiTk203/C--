#include <stdio.h>
#include <string.h>
int main()
{
    int n,a,i;
    printf("Enter size of array\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements: \n");
    for (i=0;i<n;i++)
    scanf("%d",&arr[i]);
     printf("Enter element to be searched:\n");
     scanf("%d",&a);
     for(i=0;i<n;i++)
     {
        if (arr[i]==a)
        {
            printf("position = %d\n",(i+1));
        }
     }
     return 0;



}