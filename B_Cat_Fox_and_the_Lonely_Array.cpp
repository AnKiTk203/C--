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

bool check(vi &arr, int mid)
{
    int n = arr.size();

    vi cnt(21, 0);
    vi prevcnt(21, 0);

    fr(i, mid)
    {
        int num = arr[i];
        int ind = 0;
        while(num > 0)
        {
            int bit = (num & 1);
            num = (num >> 1);
            
            if(bit)
            cnt[ind]++;

            ind++;
        }
    }
    
    prevcnt = cnt;

    rep(i, mid, n-1)
    {
        int num = arr[i - mid];
        int ind = 0;

        while(num > 0)
        {
            int bit = (num & 1);
            num = (num >> 1);
            
            if(bit)
            cnt[ind]--;

            ind++;
        }
        ind = 0;
        num = arr[i];

        while(num > 0)
        {
            int bit = (num & 1);
            num = (num >> 1);

            if(bit)
            cnt[ind]++;
            
            ind++;
        }

        fr(i, 21)
        {
            if(prevcnt[i] > 0 && cnt[i] > 0 || (prevcnt[i] == 0 && cnt[i] == 0))
            continue;

            else
            return false;
        }
        prevcnt = cnt;
    }
    return true;
}

void solve(){
    
    int n;

    cin>>n;

    vi arr(n);

    cin>>arr;


    int lo = 1, hi = n, res = n;

    while(lo <= hi)
    {
        int mid = lo + ((hi - lo)>>1);

        if(check(arr, mid))
        {
            res = min(res, mid);
            hi = mid - 1;
        }
        else
        {
            lo = mid + 1;
        }
    }
    cout<<res<<endl;
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

    