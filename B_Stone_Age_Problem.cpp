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
    int n=1,m=0,q;
    string s;
    cin>>n>>q;
    vi v(n+1, 0);

    fr(i, n){
        cin>>v[i+1];
    }

    int sum = accumulate(all(v), 0LL);

    map<int, int> hash;

    int cur = -1, ind, num, a;
    // int i = 1;
    // int lastSec = 0, lastSecVal = 0;

    // vi lastFir(n, 0);

    while(q--){
        cin>>a;

        if(a == 1){
            cin>>ind>>num;

            if(cur == -1){
                sum = sum - v[ind];
                sum += num;
                cout<<sum;
                v[ind] = num;
            }
            else{
                if(hash[ind] == 0){
                    sum = sum - cur;
                    sum += num;
                    cout<<sum;
                    hash[ind] = num; 
                }
                else{
                    sum = sum - hash[ind];
                    sum += num;
                    cout<<sum;
                    hash[ind] = num; 
                }
            }
        }
        else if(a == 2){
            cin>>num;
            sum = num*n;
            cout<<sum;
            hash.clear();
            cur = num;
        }
        nl;
    }
}

int32_t main()
{
 
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);

    int T = 1;

    while (T--)
    {
        solve();
    }
    return 0;
}

    