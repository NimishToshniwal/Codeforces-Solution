#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        if (n == 1)
        {
            cout << 0 << endl;
        }
        else if (n == 2)
        {
            cout << m << endl;
        }
        else
        {
            cout << 2 * m << endl;
        }
    }
    return 0;
}