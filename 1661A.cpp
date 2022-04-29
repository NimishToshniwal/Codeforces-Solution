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
        ll a[n], b[n], sum = 0;
        rep(i, n)
        {
            cin >> a[i];
        }
        rep(i, n)
        {
            cin >> b[i];
        }
        for (int i = 0; i < n - 1; i++)
        {
            sum += min(abs(a[i + 1] - a[i]) + abs(b[i + 1] - b[i]), abs(a[i + 1] - b[i]) + abs(b[i + 1] - a[i]));
        }
        cout << sum << endl;
    }

    return 0;
}