#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll s, exp = 0;
        cin >> s;
        while (s >= 10)
        {
            exp += (s / 10) * 10;
            s = (s / 10) + s % 10;
        }
        cout << exp + s << endl;
    }

    return 0;
}