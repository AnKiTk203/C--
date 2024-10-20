#include<bits/stdc++.h>
using namespace std;

int main()
{
    string st = "++----++++";
    string s = "GAZA";
    st.replace(2,s.length(),"GAZA");
    cout<<st;
    return 0;
}