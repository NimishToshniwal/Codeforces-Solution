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
        int n, c1 = 0, c0 = 0;
        string s;
        cin >> s;
        n = s.size();
        rep(i, n)
        {
            if (s[i] == '1')
            {
                c1++;
            }
            else
            {
                c0++;
            }
        }
        if (min(c1, c0) % 2 == 0)
        {
            cout << "NET" << endl;
        }
        else
        {
            cout << "DA" << endl;
        }
    }

    return 0;
}