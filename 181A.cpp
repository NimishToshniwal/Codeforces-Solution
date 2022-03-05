#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;
    char a[n][m];
    vector<int> v1, v2;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == '*')
            {
                v1.push_back(i + 1);
                v2.push_back(j + 1);
            }
        }
    }
    if (v1[0] == v1[1])
    {
        cout << v1[2] << " ";
    }
    else if (v1[1] == v1[2])
    {
        cout << v1[0] << " ";
    }
    else
    {
        cout << v1[1] << " ";
    }
    if (v2[0] == v2[1])
    {
        cout << v2[2] << " ";
    }
    else if (v2[1] == v2[2])
    {
        cout << v2[0] << " ";
    }
    else
    {
        cout << v2[1] << " ";
    }

    return 0;
}