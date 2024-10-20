#include<stdio.h>
#include<stdlib.h>
int main()
{
    int row,column,i,j;
    printf("Enter rows and columns");
    scanf("%d%d",&row,&column);
    int *p[row];
    for(i=0;i<row;i++)
    {
    p[i]=(int*)calloc(column,sizeof(int));
    for(j=0;j<column;j++)
    {
        scanf("%d",*(p+i)+j);
    }
    printf("\n");
    }
    printf("Entered Array is:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("%d",*(*(p+i)+j));
        }
         printf("\n");
    }
    return 0;
}
