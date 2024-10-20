#include <stdio.h>
int main()
{
    int m1,m2,n1,n2,m3,n3,i,j,k;
    printf("Enter matrix 1 dimension\n");
    scanf("%d%d",&m1,&n1);
    printf("Enter matrix 2 dimension\n");
    scanf("%d%d",&m2,&n2);
    int mat1[m1][n1],mat2[m2][n2],mat3[m1][n2];
    if (n1!=m2)
    {
        printf("Matrix cannot multiply");
    }
    else 
    {
        printf("\nEnter mat1 elements\n");
        for(i=0;i<m1;i++)
        {
            for(j=0;j<n1;j++)
            scanf("%d",&mat1[i][j]);
            printf("\n");
        }
         printf("\nEnter mat2 elements\n");
        for(i=0;i<m2;i++)
        {
            for(j=0;j<n2;j++)
            scanf("%d",&mat2[i][j]);
            printf("\n");
        }
        for(i=0;i<m1;i++)
        {
            for(j=0;j<n2;j++)
            {
                mat3[i][j]=0;
                for(k=0;k<n1;k++)
                {
                    mat3[i][j]=mat3[i][j]+mat1[i][k]*mat2[k][j];
                }
            }
        }
        for(i=0;i<m1;i++)
        {
            for(j=0;j<n2;j++)
            printf("%d ",mat3[i][j]);
            printf("\n");
        }


    }
}