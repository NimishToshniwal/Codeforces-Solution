#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    string s, s1;
    cin >> s;
    s1 = s;
    reverse(s1.begin(), s1.end());
    cout << s + s1;

    return 0;
}