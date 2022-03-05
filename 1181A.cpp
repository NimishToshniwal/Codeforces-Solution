#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{
    ll x, y, z;
    cin >> x >> y >> z;
    if ((x + y) / z == (x / z) + (y / z))
    {
        cout << (x / z) + (y / z) << " " << 0;
    }
    else
    {
        if (z - x % z < z - y % z)
        {
            cout << (x + y) / z << " " << z - x % z;
        }
        else
        {
            cout << (x + y) / z << " " << z - y % z;
        }
    }
    return 0;
}