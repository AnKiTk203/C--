#include "bits/stdc++.h"
#define int long long
#define uint unsigned long long
#define vi vector<int>
#define vvi vector<vi >
#define vb vector<bool>
#define pi pair<int>
#define pu push_back
#define po pop_back
#define pii pair<int, int>
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

pii g, h, k;
int tot;

bool solver(vi &a, vi &b, vi &c){

    g = {0, 0};
    h = {0, 0};
    k = {0, 0};

    int d = 0, e = 0, f = 0;

    int i = 0, n = a.size();

    g.first = i + 1;

    while(i < n && d < tot){
        g.second = max(g.second, i+1);
        d += a[i++];
    }

    h.first = i+1;

    while(i < n && e < tot){
        h.second = max(h.second, i+1);
        e += b[i++];
    }

    k.first = i+1;

    while(i < n){
        k.second = max(k.second, i + 1);
        f += c[i++];
    }

    // if(n == 200000)
    //  {
    //     cout<<tot<<" ";
    //     cout<<d<<" "<<e<<" "<<f<<" ";
    // }

    if(d >= tot && e >= tot && f >= tot)
    return true;

    return false;
}

void solve(){
    int n=1,m=0;
    string s;
    cin>>n;
    vi a(n), b(n), c(n);

    cin>>a;
    cin>>b;
    cin>>c;

    int to = 0;
    
    fr(i, n)
    to = to + a[i];

    tot = ceil(to/3.0);

    bool d = solver(a, b, c);

    if(d)
    {
        cout<<g<<" "<<h<<" "<<k;
        nl;
        return;
    }

    bool e = solver(a, c, b);

    if(e)
    {
        cout<<g<<" "<<k<<" "<<h;
        nl;
        return;
    }

    bool f = solver(b, a, c);

    if(f)
    {
        cout<<h<<" "<<g<<" "<<k;
        nl;
        return;
    }

    bool gh = solver(b, c, a);

    if(gh)
    {
        cout<<k<<" "<<g<<" "<<h;
        nl;
        return;
    }

    bool hk = solver(c, b, a);

    if(hk)
    {
        cout<<k<<" "<<h<<" "<<g;
        nl;
        return;
    }

    bool hi = solver(c, a, b);

    if(hi)
    {
        cout<<h<<" "<<k<<" "<<g;
        nl;
        return;
    }

    cout<<"-1";
    nl; return;

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

    