#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        map<string, ll> mp;
        ll count = 0;
        char a[n], b[n];
        rep(i, n)
        {
            string s;
            cin >> s;
            string t;
            t = s;
            for (char ch = 'a'; ch <= 'k'; ch++)
            {
                if (ch != s[0])
                {
                    t[0] = ch;
                    count += mp[t];
                }
            }
            t = s;
            for (char ch = 'a'; ch <= 'k'; ch++)
            {
                if (ch != s[1])
                {
                    t[1] = ch;
                    count += mp[t];
                }
            }
            mp[s]++;
        }
        cout << count << endl;
    }
    return 0;
}