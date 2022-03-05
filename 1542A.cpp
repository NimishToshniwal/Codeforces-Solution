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
        int n, count_even = 0, count_odd = 0;
        cin >> n;
        int a[2 * n];
        rep(i, 2 * n)
        {
            cin >> a[i];
            if (a[i] % 2 == 0)
            {
                count_even++;
            }
            else
            {
                count_odd++;
            }
        }
        if (count_even == count_odd)
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