#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int q;
    cin >> q;
    while (q--)
    {
        string s, t, s1, t1;
        cin >> s >> t;
        int a, b, m;
        a = s.size(), b = t.size();
        m = (a * b) / __gcd(a, b);
        s1 = s;
        t1 = t;
        for (int i = 1; i < m / a; i++)
        {
            s1 += s;
        }
        for (int i = 1; i < m / b; i++)
        {
            t1 += t;
        }
        if (s1 == t1)
        {
            cout << s1 << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}