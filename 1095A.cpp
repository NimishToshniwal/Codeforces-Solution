#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int n, count = 1;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < n; i += count)
    {
        cout << s[i];
        count++;
    }
    return 0;
}