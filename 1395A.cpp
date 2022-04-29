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
        int r, g, b, w;
        cin >> r >> g >> b >> w;
        if (r % 2 + g % 2 + b % 2 + w % 2 <= 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            if (((r - 1) % 2 + (g - 1) % 2 + (b - 1) % 2 + (w + 1) % 2 <= 1) && r > 0 && b > 0 && g > 0)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}