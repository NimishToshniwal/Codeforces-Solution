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
        int n, num;
        cin >> n;
        int a[n];
        rep(i, n)
        {
            cin >> a[n - i - 1];
        }
        vector<int> v(n, 0);
        for (int i = 0; i < n - 1; i++)
        {
            a[i + 1] = max(a[i] - 1, a[i + 1]);
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] > 0)
            {
                v[i] = 1;
            }
            continue;
        }
        for (int i = n - 1; i >= 0; i--)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }
    return 0;
}