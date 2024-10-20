#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int maxi = 0;
        int n;
        cin>>n;
        vector <int> arr;
        int p = n;
        while(p--)
        {
            int a;
            cin>>a;
            arr.push_back(a);
        }
        int count = 0;
        for(int i = 0; i < n ;i++)
        {
            if(arr[i] >= maxi)
            {
                // cout<<arr[i]<<" "<<maxi<<endl;
                maxi = arr[i];
                continue;
            }
            count++;
        }
        cout<<count<<endl;
    }
    return 0;
}