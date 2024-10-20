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


void solve(){
    int n=1,m=0;
    string s;
    cin>>n;

    vi v(n-1);

    cin>>v;

    int x = (n*(n+1))/2;

    if(v.back() != x){
        v.pu(x);
        vi b;
        b.pu(v[0]);
        fr(i, n-1){
            int diff = v[i+1] - v[i];
            if(diff <= n && diff > 0)
            b.pu(diff);
        }
        set<int> st(all(b));
        if(st.size() == n){
            cout<<"YES";
        }
        else
        cout<<"NO";
        nl;
        return;
    }

    map<int, int> cnt;
    cnt[v[0]]++;
    fr(i, n-2){
        cnt[v[i+1] - v[i]]++; 
    }
    vi cntG1;
    for(auto p : cnt){
        if(p.second > 1){
            cntG1.pu(p.first);
        }
    }
    if(cntG1.size() > 1){
        cout<<"NO";
        nl;
        return;
    }
    if(cntG1.size() == 1){
        int x1 = cntG1[0];
        if(cnt[x1] > 2){
            cout<<"NO\n";
            return;
        }
    }
    vi cnt0;

    rep(i, 1, n){
        if(cnt[i] == 0){
            cnt0.pu(i);
        }
    }
    if(cnt0.size() != 2){
        cout<<"NO";
        nl;
        return;
    }
    cout<<"YES";
    nl;
    return;
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

    