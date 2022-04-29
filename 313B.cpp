#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    string s;
    cin >> s;
    int n = s.size();
    int a[n];
    a[0] = 0;
    rep(i, n - 1)
    {
        if (s[i + 1] == s[i])
        {
            a[i + 1] = 1 + a[i];
        }
        else
        {
            a[i + 1] = a[i];
        }
    }
    int m;
    cin >> m;
    int b[m], c[m];
    rep(i, m)
    {
        cin >> b[i] >> c[i];
        cout << a[c[i] - 1] - a[b[i] - 1] << endl;
    }
    return 0;
}