#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t>0)
    {
    int n,i,l=0,d=0,arr[n];
    cin>>n;
    for (i=0;i<n;i++)
    cin>>arr[i];
    for(i=0;i<n;i++)
    {
        if (arr[i]>0)
        l++;
        else 
        d++;
    }
        for(i=1;i<=l;i++)
        cout<<i<<' ';
        for(i=d;i>=(l-d);i--)
        cout<<i<<' ';
        cout<<"\n";
        for(i=1;i<=2*d;i++)
            cout<<i%2<<' ';
        for(i=1;i<=(n-2*d);i++)
        cout<<i<<' ';
        cout<<"\n";
        t= t-1;
         
    }

    

    
    return 0;
}