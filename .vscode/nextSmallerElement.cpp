#include<bits/stdc++.h>
using namespace std;

void solve(int arr[], int n)
{
    stack <int> st;
    vector <int> ans;
    st.push(-1);
    for(int i=n-1;i>=0;i--)
    {
        if(st.top() < arr[i])
        {
            ans.push_back(st.top());
        }
        else{
            while(st.top() >= arr[i])
            {
                st.pop();
            }
            ans.push_back(st.top());
        }
        st.push(arr[i]);
    }
    reverse(ans.begin(),ans.end());
    for(int i = 0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
}
int main()
{
    int arr[5]={5,9,3,2,25};
    solve(arr, 5);
    return 0;
}