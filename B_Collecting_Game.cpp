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
    vi v(n);
    cin>>v;

    vvi copy(n, vi(2, 0));

    fr(i, n)
    {
        copy[i][0] = v[i];
        copy[i][1] = i;
    }

    srt(copy);

    vi hash(n, 0);

    hash[copy[n-1][1]] = n-1;
    
    int prev = -1, curr = 0;
    
    int psum = 0, csum = 0;

    for(int i = 0; i < n; i++)
    {   
        if(prev >= i)
        {
            curr = prev;
            csum = psum;
        }
        else{
            curr = i;
            csum = psum + copy[i][0];

            while(curr + 1 < n && csum >= copy[curr+1][0])
            {
                curr++;
                csum += copy[curr][0];
            }
        }

        hash[copy[i][1]] = curr;
        prev = curr;
        psum = csum;
   }

   fr(i, n)
   {
    cout<<hash[i]<<" "; 
   }
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

// #include <bits/stdc++.h>


// using namespace std;

// #define pb push_back
// #define ff first
// #define ss second

// typedef long long ll;
// typedef long double ld;
// typedef pair<int, int> pii;
// typedef pair<ll, ll> pll;
// typedef pair<ld, ld> pld;

// const int INF = 1e9;
// const ll LLINF = 1e18;
// const int MOD = 1e9 + 7;


// inline ll ceil0(ll a, ll b) {
//     return a / b + ((a ^ b) > 0 && a % b);
// }

// void setIO() {
//     ios_base::sync_with_stdio(0); cin.tie(0);
// }

// int main(){
//     setIO();
//     int T;
//     cin >> T;
//     for(int tt = 1; tt <= T; tt++){
//         int n;
//         cin >> n;
//         pii arr[n + 1];
//         for(int i = 1; i <= n; i++) cin >> arr[i].ff, arr[i].ss = i;
//         sort(arr + 1, arr + n + 1);


//         int ans[n + 1];
        
//         ll prev = 0, curr = 0;
//         ll csum = 0, psum = 0;

//         for(int i = 1; i <= n; i++){

//             if(prev >= i){

//                 curr = prev;
//                 csum = psum;

//             } else {
//                 csum = psum + arr[i].ff;
//                 curr = i;
//                 while(curr + 1 <= n && csum >= arr[curr + 1].ff){
//                     curr++;
//                     csum += arr[curr].ff;
//                 }
//             }
//             ans[arr[i].ss] = curr;
//             psum = csum;
//             prev = curr;
//         }
//         for(int i = 1; i <= n; i++) cout << ans[i] - 1 << " ";
//         cout << endl;
//     }
// }