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

        vector<int> a(n), v(n, -1);
        rep(i, n)
        {
            cin >> a[i];
        }
        // sort(a.begin(), a.end());
        rep(i, n)
        {
            while (a[i] > n)
            {
                a[i] /= 2;
            }
            while (a[i] != 0)
            {
                if (v[a[i] - 1] == -1)
                {
                    v[a[i] - 1] = 1;
                    break;
                }
                else
                {
                    a[i] /= 2;
                }
            }
        }
        bool flag = 1;
        rep(i, n)
        {
            if (v[i] == -1)
            {
                flag = 0;
                break;
            }
            else
            {
                continue;
            }
        }
        if (flag == 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}