#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    string s;
    cin >> s;
    if (s[0] - '0' >= 5)
    {
        if (s[0] == '9')
        {
            s[0] = '9';
        }
        else
        {
            s[0] = 9 - s[0] + '0'+'0';
        }
    }
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] - '0' >= 5)
        {
            s[i] = 9 - s[i] + '0' + '0';
        }
        continue;
    }
    cout << s;

    return 0;
}