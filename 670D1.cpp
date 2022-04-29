#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);
    
    ll n, k, count = 0;
    cin >> n >> k;
    int a[n], b[n];
    rep(i, n)
    {
        cin >> a[i];
    }
    rep(i, n)
    {
        cin >> b[i];
    }
    while (true)
    {
        rep(i, n)
        {
            if (b[i] >= a[i])
            {
                b[i] -= a[i];
            }
            else
            {
                k -= (a[i] - b[i]);
                b[i] = 0;
            }
        }
        if (k >= 0)
        {
            count++;
        }
        else
        {
            break;
        }
    }
    cout << count;
    return 0;
}