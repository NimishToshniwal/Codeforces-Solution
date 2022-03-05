#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    ll n, x, y;
    cin >> n;
    cin >> x >> y;
    if (x + y - 1 <= n)
    {
        cout << "White";
    }
    else
    {
        cout << "Black";
    }
    return 0;
}