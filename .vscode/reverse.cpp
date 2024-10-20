#include<bits/stdc++.h>
using namespace std;
void insertAtBottom(stack <int>& st, int target)
{
     if( st.empty() )
    {
        st.push(target);
        return;
    }
    int x = st.top();
    st.pop();
    insertAtBottom(st, target);
    st.push(x);
}
void solve(stack <int>& st)
{
    //base case
   if(st.size() == 1)
   {
   return;
   }
   //preserve top element and send remaining stack to get reversed by recursion 
   int x = st.top();
   st.pop();
   //baaki stack reverse hoke aao
   solve (st);
   //insert at bottom my preserved top element after remaining stack has been reversed
   insertAtBottom(st, x);
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