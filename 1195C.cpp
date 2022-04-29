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
    ll int h1[n + 1], h2[n + 1], t[2][n + 1];
    rep1(i, n)
    {
        cin >> h1[i];
    }
    rep1(i, n)
    {
        cin >> h2[i];
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < n; j++)
        {
            t[i][j] = 0;
        }
    }
    rep1(i, n)
    {
        t[0][i] = max(t[0][i - 1], t[1][i - 1] + h1[i]);
        t[1][i] = max(t[1][i - 1], t[0][i - 1] + h2[i]);
    }
    cout << max(t[0][n], t[1][n]);
    return 0;
}