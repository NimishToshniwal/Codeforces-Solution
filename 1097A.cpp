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
    char a[10];
    rep(i, 10)
    {
        cin >> a[i];
    }
    bool flag = 0;
    for (int i = 0; i < 10; i += 2)
    {
        if (a[i] == s[0])
        {
            flag = 1;
            break;
        }
    }
    for (int i = 1; i < 10; i += 2)
    {
        if (a[i] == s[1])
        {
            flag = 1;
            break;
            ;
        }
    }
    if (flag == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}