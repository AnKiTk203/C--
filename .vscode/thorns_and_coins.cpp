#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll F[200005];

void init()
{
    F[0] = 0;
    for(ll i = 1; i <= 200005; i++)
    {
        ll t = i;
        ll ans = 0;
        while(t > 0)
        {
            ans += t % 10;
            t = t / 10;
        }
        F[i] += F[i-1] + ans;
    }   
}
int main()
{
    int t;
    cin>>t;
    init();
    while (t--)
    {
     
     int n;
     cin>>n;
     cout<<F[n]<<endl;
    }
    return 0;
}