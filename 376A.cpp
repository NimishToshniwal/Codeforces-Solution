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
    char s1 = '^';
    int a = s.find(s1);
    ll sum = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 48 && s[i] <= 57)
        {
            sum += (s[i] - '0') * (i - a);
        }
        else
        {
            continue;
        }
    }
    if (sum < 0)
    {
        cout << "left";
    }
    else if (sum > 0)
    {
        cout << "right";
    }
    else
    {
        cout << "balance";
    }
    return 0;
}