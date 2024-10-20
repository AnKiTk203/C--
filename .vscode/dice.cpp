#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
void solve(int& count, int& n)
{
    //base case
    if(n < 0)
    return;
    
    if(n == 0)
    {
        count++;
        return;
    }
    
    for(int i = 1 ; i <= 6; i++)
    {
        
            n -= i;
            solve(count, n);
            n += i;
    }
}
int main()
{
    int n;
    cin>>n;
    int count = 0;
    solve(count, n);
    cout<<count;
    return 0;
}