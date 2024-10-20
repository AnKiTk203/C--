// #include<bits/stdc++.h>
// using namespace std;

// void reverse( queue <int>& q)
// {
//     if(q.size() == 1)
//     {
//         return;
//     }
//     int front = q.front();
//     q.pop();
//     reverse(q);
//     q.push(front);
// }
// void print(queue <int> q)
// {
//     for(int i = 1;i <= 5; i++)
//     {
//         cout<<q.front()<<" ";
//         q.pop();
//     }
//     cout<<"\n";
//     return;
// }
// int main()
// {
//     queue <int> q;
//     for(int i = 1 ; i<=5; i++)
//     {
//         q.push(i*10);
//     }
//     print(q);
//     reverse(q);
//     print(q);
//     return 0;
// }
//FIRST K ELEMENTS KA REVERSAL

#include<bits/stdc++.h>
using namespace std;
void print(queue <int> q, int n)
{
    for(int i = 1;i <= n; i++)
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<"\n";
    return;
}
int main()
{
        queue <int> q;
        int n = 5;
    for(int i = 1 ; i<=n; i++)
    {
        q.push(i*10);
    }
    print(q,n);
    int k;
    stack <int> st;
    cin>>k;
    if(k>n || k<=0)
    {
        print(q,n);
        exit(0);
    }
    int i = k;
    while(i--)
    {
        st.push(q.front());
        q.pop();
    }
    while (!st.empty())
    {
        q.push(st.top());
        st.pop();
    }
    int j = n - k;
    while(j--)
    {
        int front = q.front();
        q.pop();
        q.push(front);
    }
    print (q,n);
    
    return 0;
}