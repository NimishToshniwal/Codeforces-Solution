#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{
    int n;
    cin >> n;
    ll a[n], b[n], sum = 0;

    rep(i, n)
    {
        cin >> a[i];
        sum += a[i];
    }
    rep(i, n)
    {
        cin >> b[i];
    }
    sort(b, b + n);
    if (b[n - 1] + b[n - 2] >= sum)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}