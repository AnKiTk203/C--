#include<bits/stdc++.h>
using namespace std;

void solve (stack <int> &st, int target)
{
    //base case
    if( st.empty() )
    {
        st.push(target);
        return;
    }
    int x = st.top();
    st.pop();
    solve(st, target);
    st.push(x);
}
int main()
{
     stack<int> st;

    for(int i=1;i<=7;i++)
    {
        st.push(10*i);
    }
    solve(st, 0);
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}