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
        ll a, b, c;
        cin >> a >> b >> c;
        if (a + b + c < 9)
        {
            cout << "NO" << endl;
        }
        else
        {
            if ((a + b + c) % 9 != 0)
            {
                cout << "NO" << endl;
            }
            else
            {
                if (min(a, min(b, c)) < (a + b + c) / 9)
                {
                    cout << "NO" << endl;
                }
                else
                {
                    cout << "YES" << endl;
                }
            }
        }
    }

    return 0;
}