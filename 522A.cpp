#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int n, MAX = 1;
    cin >> n;
    string a, b, c;
    map<string, int> mp;
    mp["polycarp"] = 1;
    rep(i, n)
    {
        cin >> a >> b >> c;
        rep(i, a.size())
        {
            a[i] = tolower(a[i]);
        }
        rep(i, c.size())
        {
            c[i] = tolower(c[i]);
        }
        if (mp[c] + 1 > MAX)
        {
            MAX = mp[c] + 1;
        }
        mp[a] = mp[c] + 1;
    }
    cout << MAX;
    return 0;
}