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
        int count_ab = 0, count_ba = 0;
        for (int i = 0; i < s.size() - 1; i++)
        {
            if (s[i] == 'a' && s[i + 1] == 'b')
            {
                count_ab++;
            }
            else if (s[i] == 'b' && s[i + 1] == 'a')
            {
                count_ba++;
            }
            continue;
        }
        if (count_ab == count_ba)
        {
            cout << s << endl;
        }
        else
        {
            if (s[0] == 'a')
            {
                s[0] = 'b';
                cout << s << endl;
            }
            else
            {
                s[0] = 'a';
                cout << s << endl;
            }
        }
    }
    return 0;
}