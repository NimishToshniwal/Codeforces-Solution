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
        bool f = 0, f1;
        int a[n];
        rep(i, n)
        {
            cin >> a[i];
            if (a[i] % 2 == 0)
            {
                f = 1 - f;
            }
            else
            {
                continue;
            }
        }
        if (f == 1)
        {
            cout << "errorgorn" << endl;
        }
        else
        {
            cout << "maomao90" << endl;
        }
    }

    return 0;
}