#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int x;
    cin >> x;
    string s1, s2;
    cin >> s1 >> s2;
    if (s2 == "week")
    {
        if (x == 5 || x == 6)
        {
            cout << 53;
        }
        else
        {
            cout << 52;
        }
    }
    else
    {
        if (x <= 29)
        {
            cout << 12;
        }
        else if (x == 30)
        {
            cout << 11;
        }
        else
        {
            cout << 7;
        }
    }
    return 0;
}