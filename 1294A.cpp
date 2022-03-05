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
        ll a, b, c, n, sum, MAX;
        cin >> a >> b >> c >> n;
        sum = a + b + c + n;
        MAX = max(a, max(b, c));
        if (sum % 3 == 0 && MAX <= sum / 3)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}