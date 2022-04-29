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
        int n, k;
        cin >> n >> k;
        int a[n];
        vector<int> v(31, 0);
        rep(i, n)
        {
            cin >> a[i];
            for (int j = 30; j >= 0; j--)
            {
                if (a[i] & (1 << j))
                {
                    v[j]++;
                }
            }
        }
        ll ans = 0;
        for (int i = 30; i >= 0; i--)
        {
            if (n - v[i] <= k)
            {
                k -= (n - v[i]);
                ans += (1 << i);
            }
        }
        cout << ans << endl;
    }

    return 0;
}