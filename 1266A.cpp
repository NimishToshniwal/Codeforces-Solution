#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        bool f1 = 0, f2 = 0;
        int sum = 0, pos;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '0')
            {
                f1 = 1;
                pos = i;
            }
            sum += s[i] - '0';
        }
        for (int i = 0; i < s.size(); i++)
        {
            if (i == pos)
            {
                continue;
            }
            if ((s[i] - '0') % 2 == 0)
            {
                f2 = 1;
            }
        }
        if ((sum % 3 == 0) && f1 && f2)
        {
            cout << "red" << endl;
        }
        else
        {
            cout << "cyan" << endl;
        }
    }
    return 0;
}