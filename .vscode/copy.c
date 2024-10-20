#include <stdio.h>
int main()
{
    int i,l1=0;
    char st[20];
    char str[20];
    printf("Enter a string\n");
    fgets(st,sizeof(st),stdin);
    for(i=0;st[i]!='\0';i++)
    {
        l1=l1+1;
    }
    for(int i=0;i<l1;i++)
        {
            str[i]=st[i]; 
        }
        printf("Copy string is :\n");
        for(int i=0;i<l1;i++)
        {
            printf("%c",str[i]);
        }
        return 0;
        
}