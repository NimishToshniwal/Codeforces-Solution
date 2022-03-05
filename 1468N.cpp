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
        ll c1, c2, c3, a1, a2, a3, a4, a5;
        cin >> c1 >> c2 >> c3 >> a1 >> a2 >> a3 >> a4 >> a5;
        ll sum1 = c1 + c2 + c3;
        ll sum2 = a1 + a2 + a3 + a4 + a5;
        if (sum1 < sum2)
        {
            cout << "NO" << endl;
        }
        else
        {
            if (c1 >= a1 && c2 >= a2 && c3 >= a3)
            {
                c1 -= a1;
                c2 -= a2;
                c3 -= a3;
                if (c1 >= a4)
                {
                    c1 -= a4;
                    a4 = 0;
                }
                else
                {
                    a4 -= c1;
                }
                if (c2 >= a5)
                {
                    c2 -= a5;
                    a5 = 0;
                }
                else
                {
                    a5 -= c2;
                }
                if (c3 >= a4 + a5)
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}