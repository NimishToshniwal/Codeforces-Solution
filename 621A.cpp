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
    ll a[n], sum = 0;
    rep(i, n)
    {
        cin >> a[i];
        sum += a[i];
    }
    sort(a, a + n);
    if (sum % 2 == 0)
    {
        cout << sum;
    }
    else
    {
        rep(i, n)
        {
            if (a[i] % 2 == 1)
            {
                cout << sum - a[i];
                break;
            }
            continue;
        }
    }
    return 0;
}