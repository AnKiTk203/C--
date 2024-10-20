#include <stdio.h>
int main()
{
    int i,l1=0,l2=0,c=0;
    char st[20];
    char str[20];
    printf("Enter a string\n");
    fgets(st,sizeof(st),stdin);
    printf("Enter a string\n");
    fgets(str,sizeof(str),stdin);
    for(i=0;st[i]!='\0';i++)
    {
        l1=l1+1;
    }
    for(i=0;str[i]!='\0';i++)
    l2+=1;
    
    if(l1!=l2)
    printf("Not Equal");
    else
    {
        for(int i=0;i<l1;i++)
        {
            if(st[i]==str[i])
            c=0;
            else 
            {
            c++;
            break;
            }

        }
    
    if(c!=0)
    printf("Not equal");
    else 
    printf("equal");
    }
    return 0;
}
