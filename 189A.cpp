#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int n, a, b, c;
    cin >> n >> a >> b >> c;
    int t[n + 1], x, y, z;
    t[0] = 0;
    rep1(i, n)
    {
        x = INT_MIN, y = INT_MIN, z = INT_MIN;
        if (i >= a)
        {
            x = t[i - a];
        }
        if (i >= b)
        {
            y = t[i - b];
        }
        if (i >= c)
        {
            z = t[i - c];
        }
        t[i] = 1 + max(x, max(y, z));
    }
    // rep1(i, n)
    // {
    //     cout << t[i] << " ";
    // }
    cout<<t[n];
    return 0;
}
// 5 5 2
// 0 0 1 1 1