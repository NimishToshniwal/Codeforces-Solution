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
        int n, q;
        cin >> n >> q;
        int a[n];
        rep(i, n)
        {
            cin >> a[i];
        }
        int b = a[0];
        ll sum = 0;
        bool f = 0;
        for (int i = 1; i < n; i++)
        {
            if (f == 0)
            {
                if (a[i] > a[i - 1])
                {
                    b = a[i];
                }
                else
                {
                    sum += a[i - 1];
                    b = a[i];
                    f = 1;
                }
            }
            else
            {
                if (a[i] < a[i - 1])
                {
                    b = a[i];
                }
                else
                {
                    sum -= a[i - 1];
                    b = a[i];
                    f = 0;
                }
            }
        }
        if (!f)
        {
            sum += a[n - 1];
        }
        cout << sum << endl;
    }
    return 0;
}