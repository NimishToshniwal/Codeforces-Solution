#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    ll sum = 0;
    ll x, y;

    while (n--)
    {
        cin >> x >> y;
        if (sum < x + y)
        {
            sum = x + y;
        }
    }
    cout << sum;

    return 0;
}