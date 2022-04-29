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
        int n, a, b, c, d;
        cin >> n >> a >> b >> c >> d;
        if ((c + d) < (a - b) * n)
        {
            cout << "NO" << endl;
        }
        else if ((a - b) * n < (c - d) && (a + b) * n < (c - d))
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}