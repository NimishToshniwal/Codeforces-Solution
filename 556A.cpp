#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int n, c1 = 0, c0 = 0;
    cin >> n;
    char a[n];
    rep(i, n)
    {
        cin >> a[i];
        if (a[i] == '1')
        {
            c1++;
        }
        else
        {
            c0++;
        }
    }
    cout << abs(c1 - c0);
    return 0;
}