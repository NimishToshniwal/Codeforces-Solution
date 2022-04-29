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
        if (n % k == 0)
        {
            cout << 1 << endl;
        }
        else if (k % n == 0)
        {
            cout << (k / n) << endl;
        }
        else if (n > k)
        {
            cout << 2 << endl;
        }
        else
            cout << (k / n) + 1 << endl;
    }
    return 0;
}