#include<bits/stdc++.h>
using namespace std;

void solve ( vector <string>& ans, string &st, int index)
{
    if(index >= st.length())
    {
        ans.push_back(st);
        return;
    }
    for(int i = index; i < st.length() ; i++)
    {
        swap(st[index],st[i]);
        solve(ans, st, index+1);
        swap(st[index],st[i]);
    }
}

int main()
{
    vector <string> ans;
    string st = "abc";
    solve(ans, st, 0);
    for(int i = 0; i<ans.size() ; i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}