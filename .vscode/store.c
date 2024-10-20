#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student
{
    int roll_no;
    int marks;
    char name[20];
    
}st[3];
int main()
{
    int i=0,j=0;
    printf("Enter Name, Roll No., Marks\n");
    while(i<3)
    {
        scanf("%s",st[i].name);
        scanf("%d",&st[i].roll_no);
        scanf("%d",&st[i].marks);
        i++;
    }
    printf("Name\tRoll No\tMarks\n");
    for(i=0;i<3;i++)
    {
       printf("%s\t%d\t%d",st[i].name,st[i].roll_no,st[i].marks);
       printf("\n");
    }
    return 0;
}