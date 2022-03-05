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
        int n, k;
        cin >> n >> k;
        int a[n][k];
        if ((((n * k) + 1) / 2) % k == 0)
        {
            cout << "YES" << endl;
            int count = 1;
            for (int i = 0; i < n; i += 2)
            {
                for (int j = 0; j < k; j++)
                {
                    a[i][j] = count;
                    count += 2;
                }
            }
            count = 2;
            for (int i = 1; i < n; i += 2)
            {
                for (int j = 0; j < k; j++)
                {
                    a[i][j] = count;
                    count += 2;
                }
            }
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < k; j++)
                {
                    cout << a[i][j] << " ";
                }
                cout << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}