#include<iostream>
using namespace std;

int main()
{
    int marks[4] = {1,2,3,4};
    int* p = marks;
    p++;
    cout<< *p <<endl;
    cout<<marks[0];

    return 0;
}