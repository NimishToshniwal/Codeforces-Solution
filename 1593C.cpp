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
        ll n, k;
        cin >> n >> k;

        ll a[k];
        for (int i = 0; i < k; i++)
        {
            cin >> a[i];
        }

        sort(a, a + k, greater<int>());
        int t = 0, c = 0, count = 0, m = a[0];
        // for (int i = 0; i < k; i++)
        // {
        //     cout<<a[i]<<" ";
        // }
        // cout<<endl;
        while (count < k && c < m)
        {
            ++t;
            c += (n - m);
            m = a[++count];
        }
        cout << t << endl;
    }

    return 0;
}