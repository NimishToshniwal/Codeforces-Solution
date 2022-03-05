#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    ll i, j, n, m;
    char s[101][101];
    cin >> n >> m;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cin >> s[i][j];
        }
    }
    ll min_i = n, max_i = -1, max_j = -1, min_j = m;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (s[i][j] == '*')
            {
                if (i < min_i)
                    min_i = i;
                if (i > max_i)
                    max_i = i;
                if (j < min_j)
                    min_j = j;
                if (j > max_j)
                    max_j = j;
            }
        }
    }
    for (i = min_i; i <= max_i; i++)
    {
        for (j = min_j; j <= max_j; j++)
        {
            cout << s[i][j];
        }
        cout << endl;
    }
    return 0;
}