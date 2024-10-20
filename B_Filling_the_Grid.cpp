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

vi power(1000008, 1);

void solve(){
    int n=1,m=0;
    string s;
    cin>>n>>m;

    vi row(n), col(m);

    cin>>row;
    cin>>col;

    vvi mat(n, vi(m, 1));

    fr(i, n){
        int j = 0;
        while(j < row[i]){
            mat[i][j++] = 0;
        }
        if(j < m)
        mat[i][j] = -1;
    }

    fr(j, m){
        int i = 0;
        while(i < col[j]){
            if(mat[i][j] == -1){
                cout<<"0";
                nl; return;
            }
            mat[i++][j] = 0;
        }
        if(i < n)
        {
            if(mat[i][j] == 0){
                cout<<"0";
                nl; return;
            }
            mat[i][j] = -1;
        }
    }
    int ans = 0;
    fr(i, n){
        fr(j, m){
            if(mat[i][j] == 1)
            ans++;
        }
    }
    cout<<power[ans];
    nl; return;
}

int32_t main()
{
 
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);

    const int m = 1e9 + 7;

    rep(i, 1, 1000007){
        power[i] = ((power[i-1]%m + power[i-1]%m)%m + m)%m; 
    }
    int T = 1;
    // cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}

    