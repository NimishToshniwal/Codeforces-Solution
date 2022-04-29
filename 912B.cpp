#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    ll n, k, ans = 0;
    cin >> n >> k;
    if (k == 1)
    {
        cout << n;
    }
    else
    { // cout << (2LL << (int(log2(n)))) - 1;
        while (ans < n)
        {
            ans = ans * 2 + 1;
        }
        cout << ans;
    }

    return 0;
}