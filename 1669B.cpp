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
        int a[n];
        rep(i, n)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        bool flag = 0;
        for (int i = 0; i < n - 2; i++)
        {
            if (a[i] == a[i + 2])
            {
                cout << a[i] << endl;
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            cout << -1 << endl;
        }
    }

    return 0;
}