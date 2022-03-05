#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int n;
    ll k, count = 0;
    cin >> n >> k;
    ll a[n];
    rep(i, n)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    bool flag = 1;
    for (int i = 1; i < n; i++)
    {
        if ((a[i] - a[0]) % k == 0)
        {
            count += (a[i] - a[0]) / k;
        }
        else
        {
            flag = 0;
            break;
        }
    }
    if (flag == 0)
    {
        cout << -1;
    }
    else
    {
        cout << count;
    }
    return 0;
}