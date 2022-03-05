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
        if (n % k > k / 2)
        {
            cout << ((n / k) * k) + k / 2 << endl;
        }
        else
        {
            cout << n << endl;
        }
    }

    return 0;
}