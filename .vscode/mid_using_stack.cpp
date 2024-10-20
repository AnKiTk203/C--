#include<bits/stdc++.h>
using namespace std;

int solve (stack <int > &st, int tsize,int size)
{
    //base case
    if(2*size - 1 == tsize)
    {
        return st.top();
    }
    //popping one by one
    int x = st.top();
    st.pop();
    //storing mid returned from recursive calls.
    int mid = solve(st, tsize, size-1);
    //pushing back to keep stack intact.
    st.push(x);
    return mid;
}
int main()
{
    stack<int> st;

    for(int i=1;i<=7;i++)
    {
        st.push(10*i);
    }
    int mid = solve(st, 7, 7);
    cout<<mid;
    return 0;
}