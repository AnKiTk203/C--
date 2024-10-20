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
//     int n=1,m=0;
//     string s;
//     cin>>n>>m;
//     vi v(n);
//     cin>>v;

//     unordered_map<int, int> hash;
//     int mcnt = 0;

//     fr(i, n)
//     {
//         hash[v[i]]++;
//         if(hash[v[i]] > hash[mcnt])
//         {
//             mcnt = v[i];
//         }
//         else if(hash[v[i]] == hash[mcnt] && i < (n>>1))
//         {
//             mcnt = v[i];
//         }
//     }

//     priority_queue<int> pq;
//     int i = -1, j = 0;

//     while(j < n)
//     {
//         if(v[j] == mcnt)
//         {
//             int e = (i == -1) ? (j) : (j-1-i);
//             pq.push(e);
//             i = j;
//         }
//         j++;
//     }

//     pq.push((n-i-1));



//     int x = pq.top();
//     pq.pop();

//     int ans = max((x)/2, (pq.top()+1)/2);

//     // if(n == 7)
//     // {
//     //     while(!pq.empty())
//     //     {
//     //         cout<<pq.top()<<" ";
//     //         pq.pop();
//     //     }
//     // }
//     cout<<ans;
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
 
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> c(n);
        for (int i = 0; i < n; ++i) {
            cin >> c[i];
        }
        vector<int> last(k, -1);
        
        vector<int> max_step(k), max2_step(k);

        for (int i = 0; i < n; ++i) {
            int step = i - last[c[i] - 1];
            if (step > max_step[c[i] - 1]) {
                max2_step[c[i] - 1] = max_step[c[i] - 1];
                max_step[c[i] - 1] = step;
            } else if (step > max2_step[c[i] - 1]) {
                max2_step[c[i] - 1] = step;
            }
            last[c[i] - 1] = i;
        }
        for (int i = 0; i < k; ++i) {
            int step = n - last[i];
            if (step > max_step[i]) {
                max2_step[i] = max_step[i];
                max_step[i] = step;
            } else if (step > max2_step[i]) {
                max2_step[i] = step;
            }
        }
        int ans = 1e9;
        for (int i = 0; i < k; ++i) {
            ans = min(ans, max((max_step[i] + 1) / 2, max2_step[i]));
        }

        // for(int i = 0; i < k; i++)
        // cout<<max_step[i]<<" ";

        // for(int i = 0; i < k; i++)
        // cout<<max2_step[i]<<" ";


        cout << ans - 1 << "\n";
    }
    return 0;
}