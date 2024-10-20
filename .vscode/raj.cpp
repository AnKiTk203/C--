#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    while(n-->0){
        string s;
        cin>>s;
        string ans="";
        int x=s.length();
        if(x<11){
            cout<<s;
        }
        else{
            ans=ans+s[0];
            int y=x-2;
            
            ans=ans+to_string(y)+s[x-1];
            cout<<ans;
        }
        cout<<endl;


    }

    
}