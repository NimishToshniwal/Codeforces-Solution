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
        ll l, r, a, d;
        cin >> l >> r >> a;
        d = r / a;
        if ((d * a) - 1 >= l && (d * a) - 1 <= r)
        {
            cout << max(d + (r % a), d + a - 2) << endl;
        }
        else
        {
            cout << d + (r % a) << endl;
        }
    }

    return 0;
}