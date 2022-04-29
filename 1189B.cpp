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
    ll a[n];
    rep(i, n)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    if (a[n - 1] >= a[n - 2] + a[n - 3])
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
        for (int i = n - 4; i >= 0; i--)
        {
            cout << a[i] << " ";
        }
        cout << a[n - 3] << " " << a[n - 1] << " " << a[n - 2];
    }
    return 0;
}