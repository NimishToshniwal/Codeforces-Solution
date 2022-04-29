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
        ll w, h;
        cin >> w >> h;
        int k1, k2, k3, k4;
        cin >> k1;
        ll x1[k1];
        rep(i, k1)
        {
            cin >> x1[i];
        }
        cin >> k2;
        ll x2[k2];
        rep(i, k2)
        {
            cin >> x2[i];
        }
        cin >> k3;
        ll y1[k3];
        rep(i, k3)
        {
            cin >> y1[i];
        }
        cin >> k4;
        ll y2[k4];
        rep(i, k4)
        {
            cin >> y2[i];
        }
        cout << max((y2[k4 - 1] - y2[0]) * w, max((y1[k3 - 1] - y1[0]) * w, max((x1[k1 - 1] - x1[0]) * h, (x2[k2 - 1] - x2[0]) * h)))<<endl;
    }

    return 0;
}