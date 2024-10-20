#include<bits/stdc++.h>
using namespace std;

void insertSorted (stack <int> &st, int target) 
{
    if(st.empty())
    {
        st.push(target);
        return;
    }
    if(st.top() <= target)
    {
        st.push(target);
        return;
    }
    
    int x = st.top();

    st.pop();

    insertSorted(st, target);

    st.push(x);

}
void solve (stack <int>& st)
{
    if(st.empty())
    {
        return;
    }
    int x = st.top();
    
    st.pop();

    solve(st);

    insertSorted(st,x);

}

int main()
{
    stack<int> st;
    for(int i=1;i<=15;i++)
    {
        st.push(10*i);
    }
    stack <int> s = st;
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
     solve(s);
     cout<<"\n";
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}
