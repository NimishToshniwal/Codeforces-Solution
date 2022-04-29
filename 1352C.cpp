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
        ll n, k;
        cin >> n >> k;

        if (k % (n - 1) == 0)
        {
            cout << (((k + n - 2) / (n - 1)) - 1) + k << endl;
        }
        else
        {
            cout << ((((k + n - 2) / (n - 1)) - 1) * n) + k - (k / (n - 1)) * (n - 1) << endl;
        }
    }
    return 0;
}