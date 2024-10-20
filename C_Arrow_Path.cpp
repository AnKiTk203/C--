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
    vector<string> v(2);

    cin>>v[0];
    cin>>v[1];

    int dr[4] = {-1, 0, 1, 0};
    int dc[4] = {0, -1, 0, 1};

    vvi vis(2, vi(n, 0));

    queue<pii> q;
    q.push({0, 0});
    vis[0][0] = 1;

    while(!q.empty()){

        int x = q.front().first;
        int y = q.front().second;

        if(x == 1 && y == n - 1)
            {
                cout<<"YES";
                nl;
                return;
            }
        
        q.pop();

        fr(i, 4){
            int newx = x + dr[i];
            int newy = y + dc[i];
            if(newx == 1 && newy == n - 1)
            {
                cout<<"YES";
                nl;
                return;
            }
            if(newx >= 0 && newy >= 0 && newx < 2 && newy < n){
                if(v[newx][newy] == '<' && newy - 1 >= 0 && !vis[newx][newy-1])
                {
                    q.push({newx, newy-1});
                    vis[newx][newy - 1] = 1;
                }
                else if(v[newx][newy] == '>' && newy + 1 < n && !vis[newx][newy+1])
                {
                    q.push({newx, newy + 1});
                    vis[newx][newy + 1] = 1;
                }
            }
        }
    }
    cout<<"NO";
    nl;
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

    