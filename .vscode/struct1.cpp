#include<iostream>
using namespace std;
typedef struct employee
{
    int eid;
    char fav;
    float salary;
}ep;
int main()
{
    ep harry;
    harry.fav = 'c';
    harry.eid = 1;
    harry.salary = 120000;
    cout<<harry.eid<<endl;
    cout<<harry.fav<<endl;
    cout<<harry.salary<<endl;
    return 0;
}