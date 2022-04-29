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
    int n = s.size();
    vector<int> v(26, 0);
    for (int i = 0; i < 26; i++)
    {
        v[s[i] - 'a'] = 1;
    }
    int count = 0;
    for (int i = 0; i < 26; i++)
    {
        if (v[i] == 1)
        {
            count++;
        }
    }
    if (count % 2 == 0)
    {
        cout << "CHAT WITH HER!";
    }
    else
    {
        cout << "IGNORE HIM!";
    }

    return 0;
}