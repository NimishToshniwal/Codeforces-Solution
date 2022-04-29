#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
const ll mod = 1e9 + 7;
int main()
{

    ios::sync_with_stdio(false);

    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll b = 1, c = 0;
        while (k)
        {
            if (k & 1)
            {
                c += b % mod;
            }
            b = (b * n) % mod;
            k >>= 1;
        }
        cout << c % mod << endl;
    }

    return 0;
}