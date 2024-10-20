#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n, k, sum = 0, maxi = -1;
        cin>>n>>k;

        unordered_map<ll, ll> hash;

        vector<ll> health;
        vector<ll> position;

        for(ll i = 0; i<n; i++)
        {
            ll a;
            cin>>a;
            health.push_back(a);
        }
        for(ll i = 0; i<n; i++)
        {
            ll a;
            cin>>a;
            position.push_back(a);
            hash[a] = health[i];
        }
        ll surplus = 0;
        bool flag = false;
        for(ll i = 1; i <= max(abs(position[0]), abs(position[n - 1]));i++)
        {
            ll h = hash[i] + hash[-1*i];
            if(h > k + surplus)
            {
                cout<<"NO"<<endl;
                flag = true;
                break;
            }
            surplus += k - h;
        }
        if(!flag)
        cout<<"YES"<<endl;
    }
    return 0;
}