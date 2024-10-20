#include <iostream>
#include <climits>
using namespace std;

int reverse(int t)
{
    int rev = 0;
    int rem;
    while (t != 0)
    {
        rem = t % 10;
        if (rev < INT_MIN / 10 || rev > INT_MAX / 10)
        {
            return 0;
        }
        else
        {
            rev = rev * 10 + rem;
        }
        t = t / 10;
    }
    return rev;
}
int main()
{
    int n;
    cout << "Enter a no.";
    cin >> n;
    cout << reverse(n);
}
