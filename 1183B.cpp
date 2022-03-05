#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int q;
    cin >> q;
    while (q--)
    {
        ll n, k;
        cin >> n >> k;
        ll a[n];
        rep(i, n)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        if (a[n - 1] - a[0] > 2 * k)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << a[0] + k << endl;
        }
    }
    return 0;
}