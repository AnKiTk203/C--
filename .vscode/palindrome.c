#include <stdio.h>
#include <string.h>
int main()
{
    int l=0,i,c=0;
    char s[20];
    printf("Enter a string\n");
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++)
    {
        l++;
    }
    for(i=0;i<=l/2;i++)
    {
        if(s[i]==s[l-1-i])
        c=1;
        else 
        {
            c=0;
            break;
        }
    }
    if(c==1)
    printf("Palindrome");
    else 
    printf("Not Palindrome");
    return 0;
}