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
        ll n;
        cin >> n;
        if (n % 4 == 0)
        {
            cout << "YES" << endl;
            ll count = 2;
            for (int i = 0; i < n / 2; i++)
            {
                cout << count << " ";
                count += 2;
            }
            count = 1;
            for (int i = n / 2; i < n - 1; i++)
            {
                cout << count << " ";
                count += 2;
            }
            cout << ((2 * (n / 2) * ((n / 2) + 1)) / 2) - ((n / 2) - 1) * ((n / 2) - 1) << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}