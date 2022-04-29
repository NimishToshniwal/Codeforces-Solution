#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
#define MAX INT_MAX
int main()
{

    ios::sync_with_stdio(false);

    ll n, m, a = MAX, b = MAX, c = MAX, ab = MAX, bc = MAX, ac = MAX, abc = MAX;
    cin >> n;
    while (n--)
    {
        string s;
        ll fs = 0, sec = 0, th = 0;
        cin >> m >> s;
        rep(i, s.size())
        {
            if (s[i] == 'A')
                fs++;
            else if (s[i] == 'B')
                sec++;
            else
                th++;
        }
        if (fs && sec && th)
            abc = min(abc, m);
        else if (fs && sec)
            ab = min(ab, m);
        else if (fs && th)
            ac = min(ac, m);
        else if (th && sec)
            bc = min(bc, m);
        else if (fs)
            a = min(a, m);
        else if (sec)
            b = min(b, m);
        else
            c = min(c, m);
    }
    vector<ll> v;
    v.push_back(abc);
    v.push_back(a + bc);
    v.push_back(c + ab);
    v.push_back(b + ac);
    v.push_back(ab + bc);
    v.push_back(ab + ac);
    v.push_back(bc + ac);
    v.push_back(a + b + c);
    // cout<<ab;
    // rep(i, 8)
    // {
    //     cout << v[i] << " ";
    // }
    sort(v.begin(), v.end());
    if (v[0] < MAX)
    {
        cout << v[0] << endl;
    }
    else
    {
        cout << -1 << endl;
    }
    return 0;
}