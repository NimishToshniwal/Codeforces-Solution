#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    int a[n];
    rep(i, n)
    {
        cin >> a[i];
    }
    bool f = 0;
    for (int i = 0; i < ((1 << n) - 1); i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                sum += a[j];
                sum %= 360;
            }
            else
            {
                sum -= a[j];
                sum %= 360;
            }
        }
        if (sum % 360 == 0)
        {
            f = 1;
            cout << "YES" << endl;
            break;
        }
    }
    if (!f)
    {
        cout << "NO" << endl;
    }

    return 0;
}