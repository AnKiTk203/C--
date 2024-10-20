// #include "bits/stdc++.h"
// #define int long long
// #define uint unsigned long long
// #define vi vector<int>
// #define vvi vector<vi >
// #define vb vector<bool>
// #define vvb vector<vb >
// #define fr(i,n) for(int i=0; i<(n); i++)
// #define rep(i,a,n) for(int i=(a); i<=(n); i++)
// #define nl cout<<"\n"
// #define dbg(var) cout<<#var<<"="<<var<<" "
// #define all(v) v.begin(),v.end()
// #define srt(v)  sort(v.begin(),v.end())         // sort 
// #define mxe(v)  *max_element(v.begin(),v.end())     // find max element in vector
// #define mne(v)  *min_element(v.begin(),v.end())     // find min element in vector
// #define unq(v)  v.resize(distance(v.begin(), unique(v.begin(), v.end())));
// // make sure to sort before applying unique // else only consecutive duplicates would be removed 
// #define bin(x,y)  bitset<y>(x) 
// using namespace std;
// int MOD=1e9+7;      // Hardcoded, directly change from here for functions!



// void modadd(int &a , int b) {a=((a%MOD)+(b%MOD))%MOD;}
// void modsub(int &a , int b) {a=((a%MOD)-(b%MOD)+MOD)%MOD;}
// void modmul(int &a , int b) {a=((a%MOD)*(b%MOD))%MOD;}
// // ================================== take ip/op like vector,pairs directly!==================================
// template<typename typC,typename typD> istream &operator>>(istream &cin,pair<typC,typD> &a) { return cin>>a.first>>a.second; }
// template<typename typC> istream &operator>>(istream &cin,vector<typC> &a) { for (auto &x:a) cin>>x; return cin; }
// template<typename typC,typename typD> ostream &operator<<(ostream &cout,const pair<typC,typD> &a) { return cout<<a.first<<' '<<a.second; }
// template<typename typC,typename typD> ostream &operator<<(ostream &cout,const vector<pair<typC,typD>> &a) { for (auto &x:a) cout<<x<<'\n'; return cout; }
// template<typename typC> ostream &operator<<(ostream &cout,const vector<typC> &a) { int n=a.size(); if (!n) return cout; cout<<a[0]; for (int i=1; i<n; i++) cout<<' '<<a[i]; return cout; }
// // ===================================END Of the input module ==========================================


// void solve(){
//     int n=1,d;
//     string s;
    


//     cin>>n;

//     vi a(n), b(n);
//     cin>>a;
    
//     cin>>b;

//     cin>>d;

//     vi c(d);

//     cin>>c;

//     unordered_map<int, int> hash;

//     bool flag = false;

//     for(int i = 0; i < n; i++)
//     {
//         if(a[i] != b[i])
//         hash[b[i]]++;

//         if(c[d-1] == b[i])
//         flag = true;
//     }

//     if(!flag)
//     {
//         cout<<"NO"; nl; return;
//     }

//     for(int i = 0; i < d; i++)
//     {
//         if(hash.find(c[i]) != hash.end())
//         {
//             hash[c[i]]--;

//             if(hash[c[i]] == 0)
//             hash.erase(c[i]);
//         }
//     }

//     if(hash.size() != 0)
//     {
//         cout<<"NO";
//         nl;
//         return;
//     }

//     cout<<"YES";
//     nl;
    
// }

// int32_t main()
// {
 
//  ios_base::sync_with_stdio(false);
//  cin.tie(NULL);

//     int T = 1;
//     cin >> T;
//     while (T--)
//     {
//         solve();
//     }
//     return 0;
// }

#include <bits/stdc++.h>

using i64 = long long;

void solve() {
    int n;
    std::cin >> n;
    
    std::vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        std::cin >> b[i];
    }
    
    int m;
    std::cin >> m;
    
    std::vector<int> d(m);
    for (int i = 0; i < m; i++) {
        std::cin >> d[i];
    }
    
    int ans = 1;
    if (std::find(b.begin(), b.end(), d[m - 1]) == b.end()) {
        ans = 0;
    }
    std::multiset s(d.begin(), d.end());
    for (int i = 0; i < n; i++) {
        if (b[i] != a[i]) {
            if (!s.contains(b[i])) {
                ans = 0;
            }
            s.extract(b[i]);
        }
    }
    if (ans) {
        std::cout << "YES\n";
    } else {
        std::cout << "NO\n";
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int t;
    std::cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}


    