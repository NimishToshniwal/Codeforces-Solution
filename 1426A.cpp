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
        int n, x, count = 0;
        cin >> n >> x;
        if (n > 2)
        {
            if ((n - 2) % x == 0)
            {
                cout << 1 + ((n - 2) / x) << endl;
            }
            else
            {
                cout << 2 + ((n - 2) / x) << endl;
            }
        }
        else
        {
            cout << 1 << endl;
        }
    }
    return 0;
}