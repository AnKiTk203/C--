#include <stdio.h>
#include <string.h>
void rev(char*p, char*q);
void rev(char *p, char *q)
{
    char t = *p;
    *p = *q;
    *q = t;
}
int main()
{
    int i, l = 0, c = 0;
    char s[20];
    printf("Enter a string\n");
    scanf("%s",s);
    for (i = 0; s[i] != '\0'; i++)
    {
        l=l+1;
    }
    printf("%d\n",l);
    char st[l];
    for (i = 0; i<l; i++)
    {
        st[i] = s[i];
    }
    printf("%s\n", st);
    for (i = 0; i < (l / 2); i++)
    {
        rev(&s[i], &s[l - 1 - i]);
    }
    for (i = 0; i<l; i++)
    {
        if (s[i] ==st[i])
        c=0;
        else if(s[i] != st[i])
        {
            c++;
            break;
        }
    }
    printf("%s\n",s);
    printf("%s\n",st);
    printf("%d\n",c);

    if (c == 0)
        printf("Palindrome");
    else
        printf("Not Palindrome");
    return 0;
}
