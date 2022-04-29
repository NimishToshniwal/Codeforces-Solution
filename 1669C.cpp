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
        int n;
        cin >> n;
        int a[n], c1 = 0, c2 = 0;
        rep(i, n)
        {
            cin >> a[i];
            if (a[i] % 2 == 0)
            {
                c1++;
            }
            else
            {
                c2++;
            }
        }
        bool f1 = 1, f2 = 1;
        rep(i, n)
        {
            if (i % 2 == 0)
            {
                if (a[i] % 2 == 0)
                {
                    f1 = 0;
                    break;
                }
            }
            else
            {
                if (a[i] % 2 == 1)
                {
                    f1 = 0;
                    break;
                }
            }
        }
        rep(i, n)
        {
            if (i % 2 == 0)
            {
                if (a[i] % 2 == 1)
                {
                    f2 = 0;
                    break;
                }
            }
            else
            {
                if (a[i] % 2 == 0)
                {
                    f2 = 0;
                    break;
                }
            }
        }
        if (f1 || f2)
        {
            cout << "YES" << endl;
        }
        else if (c1 == n || c2 == n)
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