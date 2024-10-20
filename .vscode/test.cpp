#include<bits/stdc++.h>
using namespace std;
namespace std {
    template <>
    struct hash<std::vector<int>> {
        size_t operator()(const std::vector<int>& v) const {
            size_t result = 0;
            for (int value : v) {
                result ^= std::hash<int>{}(value) + 0x9e3779b9 + (result << 6) + (result >> 2);
            }
            return result;
        }
    };
}
int main()
{
    vector <int> x ={1, 2 ,3};
    vector <int> y ={1, 2 ,3};
    
    unordered_map <vector <int>, int> m;
    m[x] = 1;
    m[y] = 2;
    cout<<m[x];
    return 0;
}