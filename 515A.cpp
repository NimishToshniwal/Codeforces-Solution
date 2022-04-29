#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    ll a, b, s;
    cin >> a >> b >> s;
    if (s < abs(a) + abs(b))
    {
        cout << "NO" << endl;
    }
    else
    {
        if ((s - (abs(a) + abs(b))) % 2 == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}