#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int n, a, b, MAX = 0, count = 0;
    cin >> n;
    int c[n];
    rep(i, n)
    {
        cin >> a >> b;
        c[i] = b - a;
    }
    for (int i = 0; i < n; i++)
    {
        count += c[i];
        if (MAX < count)
        {
            MAX = count;
        }
    }
    cout << MAX;
    return 0;
}