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
        int count1 = 0, count2 = 0, count3 = 0;
        if (s.length() % 2 || s[0] == ')' || s[s.size() - 1] == '(')
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}