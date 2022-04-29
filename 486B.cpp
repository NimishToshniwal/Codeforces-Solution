#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int m, n, k;
    cin >> m >> n;
    int v[m][n];
    int a[m][n];
    int b[m][n];
    rep(i, m)
    {
        rep(j, n)
        {
            cin >> v[i][j];
            a[i][j] = 1;
            b[i][j] = 0;
        }
    }
    rep(i, m)
    {
        rep(j, n)
        {
            if (v[i][j] == 0)
            {
                for (int k = 0; k < m; k++)
                {
                    a[k][j] = 0;
                }
                for (int l = 0; l < n; l++)
                {
                    a[i][l] = 0;
                }
            }
            continue;
        }
    }
    rep(i, m)
    {
        rep(j, n)
        {
            if (a[i][j] == 1)
            {
                for (int k = 0; k < m; k++)
                {
                    b[k][j] = 1;
                }
                for (int l = 0; l < n; l++)
                {
                    b[i][l] = 1;
                }
            }
        }
    }
    bool flag = 1;
    rep(i, m)
    {
        rep(j, n)
        {
            if (b[i][j] != v[i][j])
            {
                flag = 0;
                break;
            }
        }
    }
    // cout << "MATRIX A=" << endl;
    // rep(i, m)
    // {
    //     rep(j, n)
    //     {
    //         cout << a[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    // cout << "MATRIX B=" << endl;
    // rep(i, m)
    // {
    //     rep(j, n)
    //     {
    //         cout << b[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    if (flag == 1)
    {
        cout << "YES" << endl;
        rep(i, m)
        {
            rep(j, n)
            {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
    else
    {
        cout << "NO";
    }
    return 0;
}