#include <stdio.h>
typedef struct complex
{
    int real;
    int img;

} com;
int add1(com a, com b)
{
    int c;
    c = a.real + b.real;
    return c;
}
int add2(com a, com b)
{
    int c;
    c = a.img + b.img;
    return c;
}
int main()
{
    com n1, n2, n3;
    printf("Enter real and img part");
    scanf("%d%d", &n1.real, &n1.img);
    scanf("%d%d", &n2.real, &n2.img);
    n3.real = add1(n1, n2);
    n3.img = add2(n1, n2);
    printf("Sum is = %d+i%d", n3.real, n3.img);
    return 0;
}