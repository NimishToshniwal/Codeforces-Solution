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
        int n;
        cin >> n;
        int a[n], b[n];
        rep(i, n)
        {
            cin >> a[i];
            b[i] = a[i];
        }
        sort(a, a + n);
        bool flag = 1;
        rep(i, n)
        {
            if (a[i] == b[i])
            {
                continue;
            }
            else
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            cout << 0 << endl;
        }
        else
        {
            if (a[0] == b[0] || a[n - 1] == b[n - 1])
            {
                cout << 1 << endl;
            }
            else
            {
                if (a[0] == b[n - 1] && a[n - 1] == b[0])
                {
                    cout << 3 << endl;
                }
                else
                {
                    cout << 2 << endl;
                }
            }
        }
    }
    return 0;
}