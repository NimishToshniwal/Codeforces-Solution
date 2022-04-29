#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int a, b, c;
    cin >> a >> b >> c;
    cout << max(a, max(b, c)) - min(a, min(b, c));
    return 0;
}