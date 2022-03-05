#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    char a[n][7];
    int b[n][7];
    rep(i, n)
    {
        rep(j, 7)
        {
            cin >> a[i][j];
            b[i][j] = a[i][j] - '0';
        }
    }
    int sum1 = 0, sum2 = 0;

    rep(j, 7)
    {
        rep(i, n)
        {
            sum1 += b[i][j];
        }
        // cout<<sum1<<endl;
        if (sum1 > sum2)
        {
            sum2 = sum1;
        }
        sum1 = 0;
    }
    cout << sum2;
    return 0;
}