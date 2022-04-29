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
        int n, MAX = 0, MIN = INT_MAX, MAXi, MINi;
        cin >> n;
        ll a[n];
        rep(i, n)
        {
            cin >> a[i];
            if (a[i] > MAX)
            {
                MAX = a[i];
                MAXi = i;
            }
            if (a[i] < MIN)
            {
                MIN = a[i];
                MINi = i;
            }
        }
        cout << MINi + 1 << " " << MAXi + 1 << endl;
    }

    return 0;
}