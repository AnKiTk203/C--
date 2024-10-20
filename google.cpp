#include<bits/stdc++.h>
using namespace std;
int  ans(string a,string b)
{
    int n=a.size();
    int m=b.size();
int ind=-1
    for(int i=0;i<n;i++)
    {
        if(b[0]==a[i]){
        ind=i;
        break;}
    }
    if(ind==-1)
    return -1;

    vector<bool>bbb(m,false);
    v[0]=true;
    int answer=ind;
    for(int i=1;i<m;i++)
    {
        for(int j=ind+1;j<n;j++)
        {
           if(b[i]==a[j])
           {
            bbb[i]=true;
            ind=
           }
        }

    }

}
int main()
{
    string a;
    string b;
    cin>>a>>b;
    cout<<ans(a,b);
}