#include <stdio.h>
int main ()
{
    int n1,n2,i,j;
    printf("Enter order of matrix\n");
    scanf("%d%d",&n1,&n2);
    int arr1[n1][n2],arr2[n2][n1];
    printf("Enter elements: \n");
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        scanf("%d",&arr1[i][j]);
    }
    for (i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        arr2[j][i]=arr1[i][j];
    }
    printf ("Transpose matrix is:\n");
    for(i=0;i<n2;i++)
        {
            for(j=0;j<n1;j++)
            printf("%d ",arr2[i][j]);
            printf("\n");
        }




}
