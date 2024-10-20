#include <stdio.h>
#include <string.h>
void rev(char *p, char *q)
{
    char t = *p;
    *p = *q;
    *q = t;
}
int main()
{
    int i, l = 0;
    char s[20];
    printf("Enter a string\n");
    fgets(s, sizeof(s), stdin);
    for (i = 0; s[i] != '\0'; i++)
    {
        l++;
    }
    for (i = 0; i < (l / 2); i++)
    {
        rev(&s[i], &s[l - 1 - i]);
    }
    printf("%s", s);
    return 0;
}