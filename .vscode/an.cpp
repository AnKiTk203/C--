#include<iostream>
using namespace std;

int main()
{
    int n,j,t,b,s=0,i,c=0,z,x,g=0;
    cin>>t;
    while(t>0)
    {
        cin>>n;
    int a[n];
    int k[n];
        for(j=0;j<n;j++)
    {
        cin>>b;
        a[j]=b;
        k[j]=a[j];
    }
        s = a[0];
        for(i=0;i<n-1;i++)
        {
            
            if (a[i+1]==s)
            {
                z=a[i+1];
                a[i+1]=a[i];
                a[i]=z;
                ++c;
                s+=a[i];

            }
            else{
                s+=a[i+1];
            }
             
            }
            if(c==0)
            {
                cout<<"YES"<<endl;
            for(x=0;x<n;x++)
               {cout<<k[x]<<" ";}
            }
            else if (c>0)
            {
                s=a[0];
        for(i=0;i<n-1;i++)
        {
            if (a[i+1]==s)
            {
            ++g;
            }
            s+=a[i+1]; 

               }
               if (g>0)
             {
                cout<<"NO"<<endl;
             }  
             else 
             {
                cout<<"YES"<<endl;
                for(x=0;x<n;x++)
                cout<<a[x]<<" ";
             }


            }
            --t;
            g=0;
        }
        return 0;
}