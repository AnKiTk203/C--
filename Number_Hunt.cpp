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

const int SZ=5e6+5;
int numFactors[SZ];     // the number of primes which are a divisor of i.
int minPrime[SZ];       // the minimum prime which is a divisor of i
vector<int> primes;
void precomp(){
    memset(numFactors,0,sizeof numFactors);
    memset(minPrime,-1,sizeof minPrime);
    minPrime[1]=1;
    for(int i=2;i<SZ;i++){
        if(minPrime[i]==-1){
            primes.push_back(i);
            for(int j=i;j<SZ;j+=i){
                minPrime[j]=i;   
            }
        }
    }
    for(int i=2;i<SZ;i++){
        int div=i/minPrime[i];
        numFactors[i]=numFactors[div]+(minPrime[div]!=minPrime[i]);
    }
}
bool isPrime(int n){
    // return minPrime[n]==n;    // comment out this if not precomputed! 
    for(int i=2;i*i<=n;i++){if(n%i==0)  return 0;}return 1;
}

bool valid(int n,set<int>& avail){
    int div=minPrime[n];
    while(div>1){
        if(!avail.count(div))   return 0;
        n/=div;
        div=minPrime[n];
    }
    return 1;
}

void solve(){
    int n=1,m=0;
    string s;
    cin>>n;

    int ans = 1;
    int cnt = 0;
    
    if(n == 1)
    {
        cout<<"6";
        nl;
        return;
    }

    for(int i = n; i < 1e18; i++){
        if(isPrime(i))
        {
            ans *= i;
            cnt++;
        }
        if(cnt == 2)
        break;
    }

    cout<<ans;
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

    