#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    string n= "9875";
    int len = n.length();
    int a=0;
    for(int i=0;i<len;i++)
    {
        char c = n[i];
        a = a + c-'0';
    }
    cout<<a<<endl;
    return 0;
}