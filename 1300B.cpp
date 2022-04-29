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
        int n;
        cin >> n;
        ll a[2 * n];
        rep(i, 2 * n)
        {
            cin >> a[i];
        }
        sort(a, a + 2 * n);
        cout << abs(a[n] - a[n - 1]) << endl;
    }

    return 0;
}