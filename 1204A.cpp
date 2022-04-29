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
    int count = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '1')
        {
            count++;
        }
    }
    if (s.size() % 2 == 0)
    {
        cout << s.size() / 2;
    }
    else
    {
        if (count > 1)
        {
            cout << (s.size() / 2) + 1;
        }
        else
        {
            cout << s.size() / 2;
        }
    }
    return 0;
}