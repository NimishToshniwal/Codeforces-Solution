#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int n, k, count = 0;
    cin >> n >> k;
    int a[n];
    rep(i, n)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 8)
        {
            k -= 8;
            count++;
            if (k <= 0)
            {
                cout << count;
                break;
            }
            a[i] -= 8;
            a[i + 1] += a[i];
        }
        else
        {
            k -= a[i];
            a[i] = 0;
            count++;
            if (k <= 0)
            {
                cout << count;
                break;
            }
        }
    }
    if (k > 0)
    {
        cout << -1;
    }
    return 0;
}