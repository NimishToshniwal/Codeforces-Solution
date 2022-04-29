#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int n, c1 = 0;
    cin >> n;
    int a[n];
    rep(i, n)
    {
        cin >> a[i];
        c1 += a[i];
        if (a[i])
        {
            a[i] = -1;
        }
        else
        {
            a[i] = 1;
        }
    }
    if (c1 == n)
    {
        cout << c1 - 1;
        return 0;
    }
    int count = 0, b = 0;
    rep(i, n)
    {
        b = max(b + a[i], 0);
        count = max(b, count);
    }
    cout << count + c1;
    return 0;
}