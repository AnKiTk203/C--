#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack <char> st;
    string str = "4556*--";

    for(int i = 0; i<str.length();i++)
    {
        int A,B;
        int val;

        if(isdigit(str[i]))
        {
            st.push(str[i] - '0');
        }
        else if(str[i] == '*' || str[i] == '/' || str[i] == '+' || str[i] == '-')
        {
            if(st.size() == 1)
            cout<<"Wrong";

            A = st.top();
            st.pop();
            B = st.top();
            st.pop();

            switch(str[i])
            {
                case '*':
                val = A*B;
                break;

                case '/':
                val = B/A;
                break;

                case '-':
                val = B-A;
                break;

                case '+':
                val = A+B;
                break;

                default:
                cout<<"Wrong Input";
                exit(0);
            }
            st.push(val);
        }
    }
    int ans = st.top();
    cout<<ans;
    return 0;
}