#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{
    string s;
    vector<int> v1;
    cin >> s;
    for (int i = 0; i < s.length();)
    {

        if (s[i] == '-' && s[i + 1] == '-')
        {
            v1.push_back(2);
            i += 2;
        }
        else if (s[i] == '-' && s[i + 1] == '.')
        {
            v1.push_back(1);
            i += 2;
        }
        else if (s[i] == '.')
        {
            v1.push_back(0);
            i++;
        }
    }
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i];
    }

    return 0;
}