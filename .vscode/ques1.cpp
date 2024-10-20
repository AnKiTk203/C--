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

    priority_queue<pair<int, int>> a, b;
        
        unordered_set<int> st;
        
        long long ans = 0;
        
        for(int i = 0; i < n; i++)
        {
            a.push({arr[i], i});
            b.push({brr[i], i});
        }
        
        while(n > 0)
        {
            // cout<<ans<<" ";
            long long tipa = 0;
            long long tipb = 0;
            
            int i = -1, j = -1;
            
            while(!a.empty() && st.find(a.top().second) != st.end())  a.pop();
            
            if(!a.empty()) 
            {
                i = a.top().second;
                tipa = a.top().first;
            }
            
            while(!b.empty() && st.find(b.top().second) != st.end())  b.pop();
            
            if(!b.empty()) 
            {
                j = b.top().second;
                tipb = b.top().first;
            }
            
            
            //case 1 -> both are from different indexes
            
            if(i != j && i != -1 && j != -1)
            {
                //i aur j set me nahi h
                if(tipa > tipb && x > 0)
                {
                    ans += tipa;
                    x--;
                    a.pop();
                    st.insert(i);
                }
                else if(tipa < tipb && y > 0)
                {
                    ans += tipb;
                    y--;
                    b.pop(); st.insert(j);
                }
                else
                {
                    if(x > 0)
                    {
                        ans += tipa;
                        x--;
                        st.insert(i);
                        a.pop();
                    }
                    else if(y > 0)
                    {
                      ans += tipb;
                      y--;
                      st.insert(j);
                      b.pop();
                    }
                }
            }
            //case 2 -> both are from same indexes
            else if(i != -1 && i == j)
            {
                if(tipa > tipb && x > 0)
                {
                    ans += tipa;
                    x--;
                }
                else if(tipa < tipb && y > 0)
                {
                    ans += tipb;
                    y--;
                }
                else
                {
                    if(x > 0)
                    {
                        ans += tipa;
                        x--;
                    }
                    else if(y > 0)
                    {
                      ans += tipb;
                      y--; 
                    }
                }
                a.pop(); b.pop();
                st.insert(i);
            }
            else if(i != -1 && j == -1 && x > 0)
            {
                ans += tipa;
                st.insert(i);
                a.pop(); x--;
            }
            else if(j != -1 && i == -1 && y > 0)
            {
                ans += tipb;
                st.insert(j);
                b.pop(); y--;
            }
            n--;
            cout<<tipa<<" "<<tipb<<" "<<i<<" "<<j<<" ";
            cout<<ans<<endl;
        }
        return ans;
    
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

    