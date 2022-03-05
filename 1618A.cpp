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
        ll b[7];
        rep(i, 7)
        {
            cin >> b[i];
        }
        if ((b[0] + b[1]) == b[2])
        {
            cout << b[6] - b[5] << " " << b[6] - b[4] << " " << b[3] << endl;
        }
        else
        {
            cout << b[6] - b[5] << " " << b[6] - b[4] << " " << b[6] - b[3] << endl;
        }
    }
    return 0;
}