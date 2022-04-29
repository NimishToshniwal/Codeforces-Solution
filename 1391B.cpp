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
        int n, m;
        cin >> n >> m;
        char a[n][m];
        rep(i, n)
        {
            rep(j, m)
            {
                cin >> a[i][j];
            }
        }
        int count = 0;
        for (int i = 0; i < n - 1; i++)
        {

            if (a[i][m - 1] == 'R')
            {
                count++;
                a[i][m - 1] = 'D';
            }
        }

        for (int j = 0; j < m - 1; j++)
        {
            if (a[n - 1][j] == 'D')
            {
                count++;
                a[n - 1][j] = 'R';
            }
        }

        cout << count<<endl;;
    }

    return 0;
}