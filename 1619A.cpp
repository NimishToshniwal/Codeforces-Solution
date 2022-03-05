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
        cin >> s;
        if (s.length() % 2 == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            bool flag = 1;
            for (int i = 0; i < (s.length()) / 2; i++)
            {
                if (s[i] == s[((s.size()) / 2) + i])
                {
                    continue;
                }
                else
                {
                    flag = 0;
                    break;
                }
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
    }
    return 0;
}