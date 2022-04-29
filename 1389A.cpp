#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int t;
    cin >> t;
    while (t--)
    {
        ll l, r;
        cin >> l >> r;
        if (r < 2 * l)
        {
            cout << -1 << " " << -1 << endl;
        }
        else
        {
            cout << l << " " << 2 * l << endl;
        }
    }
    return 0;
}