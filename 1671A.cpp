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
        int n;
        n = s.size();
        if (n == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            bool f = 1;
            if (s[0] != s[1])
            {
                f = 0;
            }
            else if (s[n - 2] != s[n - 1])
            {
                f = 0;
            }
            else
            {
                for (int i = 1; i < n - 2; i++)
                {
                    if (s[i] != s[i + 1] && s[i + 1] != s[i + 2])
                    {
                        f = 0;
                    }
                }
            }
            if (f == 0)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }
    }
    return 0;
}