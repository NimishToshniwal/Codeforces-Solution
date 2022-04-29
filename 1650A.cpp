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
        string s;
        char c;
        cin >> s >> c;
        bool flag = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (c == s[i])
            {
                if (i % 2 == 0)
                {
                    flag = 1;
                    break;
                }
                continue;
            }
            continue;
        }
        if (flag == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}