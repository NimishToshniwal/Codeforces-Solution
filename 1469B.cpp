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
        int n, m, MAX1 = 0, MAX2 = 0;
        cin >> n;
        int a[n];
        rep(i, n)
        {
            cin >> a[i];
        }
        cin >> m;
        int b[m];
        rep(i, m)
        {
            cin >> b[i];
        }
        rep(i, n - 1)
        {
            a[i + 1] += a[i];
        }
        rep(i, m - 1)
        {
            b[i + 1] += b[i];
        }
        rep(i, n)
        {
            if (a[i] > MAX1)
            {
                MAX1 = a[i];
            }
        }
        rep(i, m)
        {
            if (b[i] > MAX2)
            {
                MAX2 = b[i];
            }
        }
        cout << MAX1 + MAX2 << endl;
    }
    return 0;
}