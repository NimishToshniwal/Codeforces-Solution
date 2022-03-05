#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int n, m;
    cin >> n;
    int a[n], MAXa = 0, MAXb = 0;
    rep(i, n)
    {
        cin >> a[i];
    }
    cin >> m;
    int b[m];
    rep(i, m)
    {
        cin >> b[i];
    }
    rep(i, n)
    {
        if (a[i] > MAXa)
        {
            MAXa = a[i];
        }
        continue;
    }
    rep(i, m)
    {
        if (b[i] > MAXb)
        {
            MAXb = b[i];
        }
        continue;
    }
    cout << MAXa << " " << MAXb;
    return 0;
}