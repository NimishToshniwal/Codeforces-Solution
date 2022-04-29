#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int n, m, costa, b, ans = 0;
    cin >> n >> m >> costa >> b;
    if (b < costa * m)
    {
        ans = ((n % m) * costa);

        if (ans > b)
        {
            cout << ((n / m) * b) + b;
        }
        else
        {
            ans += (n / m) * b;
            cout << ans;
        }
    }
    else
    {
        ans += costa * n;
        cout << ans;
    }
    return 0;
}