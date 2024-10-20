#include "bits/stdc++.h"
#define int long long
#define uint unsigned long long
#define vi vector<int>
#define vvi vector<vi >
#define vb vector<bool>
#define vvb vector<vb >
#define fr(i,n) for(int i=0; i<(n); i++)
#define rep(i,a,n) for(int i=(a); i<=(n); i++)
#define nl cout<<"\n"
#define dbg(var) cout<<#var<<"="<<var<<" "
#define all(v) v.begin(),v.end()
#define srt(v)  sort(v.begin(),v.end())         // sort 
#define mxe(v)  *max_element(v.begin(),v.end())     // find max element in vector
#define mne(v)  *min_element(v.begin(),v.end())     // find min element in vector
#define unq(v)  v.resize(distance(v.begin(), unique(v.begin(), v.end())));
// make sure to sort before applying unique // else only consecutive duplicates would be removed 
#define bin(x,y)  bitset<y>(x) 
using namespace std;
int MOD=1e9+7;      // Hardcoded, directly change from here for functions!



void modadd(int &a , int b) {a=((a%MOD)+(b%MOD))%MOD;}
void modsub(int &a , int b) {a=((a%MOD)-(b%MOD)+MOD)%MOD;}
void modmul(int &a , int b) {a=((a%MOD)*(b%MOD))%MOD;}
// ================================== take ip/op like vector,pairs directly!==================================
template<typename typC,typename typD> istream &operator>>(istream &cin,pair<typC,typD> &a) { return cin>>a.first>>a.second; }
template<typename typC> istream &operator>>(istream &cin,vector<typC> &a) { for (auto &x:a) cin>>x; return cin; }
template<typename typC,typename typD> ostream &operator<<(ostream &cout,const pair<typC,typD> &a) { return cout<<a.first<<' '<<a.second; }
template<typename typC,typename typD> ostream &operator<<(ostream &cout,const vector<pair<typC,typD>> &a) { for (auto &x:a) cout<<x<<'\n'; return cout; }
template<typename typC> ostream &operator<<(ostream &cout,const vector<typC> &a) { int n=a.size(); if (!n) return cout; cout<<a[0]; for (int i=1; i<n; i++) cout<<' '<<a[i]; return cout; }
// ===================================END Of the input module ==========================================

void solve(){
    int n=1,m=0;
    string s;
    cin>>n;
    vi a(n), b(n), c(n);
    
    cin>>a;
    cin>>b;
    cin>>c;

    //first

    priority_queue<pair<int, int>> pq1, pq2, pq3;

    for(int i = 0; i < n; i++)
    {
        pq1.push({a[i], i});
        pq2.push({b[i], i});
        pq3.push({c[i], i});
    }

    int i = 0;
    vector<pair<int, int>> f(3), g(3), h(3);
    while(i < 3)
    {
        f[i] = pq1.top(); pq1.pop(); 
        g[i] = pq2.top(); pq2.pop(); 
        h[i] = pq3.top(); pq3.pop(); 
        i++;
    }
    int ans = 0;
    fr(i, 3)
    {
        int one = f[i].first;
        fr(j, 3)
        {
            if(g[j].second == f[i].second)
            continue;
            int two = g[j].first;
            fr(k, 3)
            {
                if(h[k].second == f[i].second || g[j].second == h[k].second)
                continue;

                int three = h[k].first;

                ans = max(ans, one + two + three);
            }
        }
    }
    cout<<ans<<endl;
}

int32_t main()
{
 
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);

    int T = 1;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}

    