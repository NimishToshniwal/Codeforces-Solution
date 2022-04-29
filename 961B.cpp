#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int n, k;
    cin >> n >> k;
    ll sum = 0;
    int a[n], b[n];
    rep(i, n)
    {
        cin >> a[i];
    }
    rep(i, n)
    {
        cin >> b[i];
        sum += a[i] * b[i];
        if (b[i] == 1)
        {
            a[i] = 0;
        }
    }
    for (int i = 1; i < n; i++)
    {
        a[i] += a[i - 1];
    }
    int MAX = a[k - 1];
    for (int i = k; i < n; i++)
    {
        if (a[i] - a[i - k] > MAX)
        {
            MAX = a[i] - a[i - k];
        }
    }
    cout << sum + MAX;
    return 0;
}