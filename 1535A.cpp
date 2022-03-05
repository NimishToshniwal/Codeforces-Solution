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
        int a[4], MAX1 = INT_MIN, MAX2 = INT_MIN, MAXi1, MAXi2;
        rep(i, 4)
        {
            cin >> a[i];
            if (a[i] > MAX1)
            {
                MAX1 = a[i];
                MAXi1 = i;
            }
            continue;
        }
        rep(i, 4)
        {
            if (i == MAXi1)
            {
                continue;
            }
            else
            {
                if (a[i] > MAX2)
                {
                    MAX2 = a[i];
                    MAXi2 = i;
                }
            }
        }
        if (MAXi1 + 1 <= 2 && MAXi2 + 1 > 2)
        {
            cout << "YES" << endl;
        }
        else if (MAXi1 + 1 > 2 && MAXi2 + 1 <= 2)
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