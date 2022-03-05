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
        int n;
        cin >> n;
        ll a[n];
        rep(i, n)
        {
            cin >> a[i];
        }
        int count = 0;
        rep(i, n)
        {
            while (a[i] % 2 != 1)
            {
                count++;
                a[i] /= 2;
            }
            continue;
        }
        sort(a, a + n);
        ll sum = 0;
        a[n - 1] = a[n - 1] * pow(2, count);
        rep(i, n)
        {
            sum += a[i];
        }
        cout << sum << endl;
    }

    return 0;
}