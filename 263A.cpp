#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int a[5][5], i1, j1;
    rep(i, 5)
    {
        rep(j, 5)
        {
            cin >> a[i][j];
            if (a[i][j] == 1)
            {
                i1 = i;
                j1 = j;
            }
        }
    }
    cout << abs(i1 - 2) + abs(j1 - 2);
    return 0;
}