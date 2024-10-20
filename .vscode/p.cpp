#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>


using namespace std;


int main() {
   int n,i,b;
   cin>>n;
   int arr[n];
   for(i=0;i<n;i++)
   {
       cin>>b;
       arr[i]=b;
   }
   for(i=1;i<=n;i++)
   {
       cout<<(arr[n-i])<<" ";
   }
    return 0;
}

