#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int n, p1, p2, p3, t1, t2;
    cin >> n >> p1 >> p2 >> p3 >> t1 >> t2;
    int l[n], r[n];
    rep(i, n)
    {
        cin >> l[i] >> r[i];
    }
    ll sum = 0;
    for (int i = 1; i < n; i++)
    {
        if (l[i] - r[i - 1] > t1 + t2)
        {
            sum += (t1 * p1) + (t2 * p2) + (l[i] - r[i - 1] - (t1 + t2)) * p3;
        }
        else
        {
            if (l[i] - r[i - 1] > t1)
            {
                sum += t1 * p1 + (l[i] - r[i - 1] - t1) * p2;
            }
            else
            {
                sum += (l[i] - r[i - 1]) * p1;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        sum += (r[i] - l[i]) * p1;
    }
    cout << sum;
    return 0;
}